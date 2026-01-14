#include <AccelStepper.h> 
// ===================== USER-SET GLOBALS ===================== 
// Set these TWO variables only to change operation: 
// Volumetric flow rate (mL per minute) 
float flowRate_mL_min = 10.0;      
// <--- CHANGE THIS FOR FLOW RATE 
// Syringe inner diameter (mm) 
// 20 mL syringe: 19.50 mm 
// 10 mL syringe: 15.15 mm 
float syringeDiameter_mm = 19.50;  // <--- SET TO ONE OF ABOVE VALUES 
// ===================== HARDWARE CONSTANTS ==================== 
// Stepper base specs (without microstepping) 
const int MOTOR_STEPS_PER_REV = 200;   // 1.8° per full step typical 
// MICROSTEPPING FACTOR 
// Set this to match your driver configuration (MS1/MS2/MS3 pins): 
// e.g. 1, 2, 4, 8, 16, etc. 
const int MICROSTEPS = 16;             
// <--- CHANGE TO YOUR MICROSTEPPING SETTING 
// Effective steps per rev including microstepping 
const int STEPS_PER_REV = MOTOR_STEPS_PER_REV * MICROSTEPS; 
// Lead screw pitch: mm of plunger travel per *full* motor revolution 
const float LEADSCREW_PITCH_MM_PER_REV = 8.0;   // CHANGE if your screw is different 
// Stepper pins (DRIVER mode: stepPin, dirPin) 
const int STEP_PIN = 2; 
const int DIR_PIN  = 3; 
// Optional enable pin (set to -1 if not used) 
const int ENABLE_PIN = -1; 
// Latching start/pause switch 
// Assumed: LOW = OFF (paused), HIGH = ON (running) 
const int BUTTON_PIN = 7; 
// Limit switch detecting EMPTY syringe 
// Assumed: INPUT_PULLUP, so: 
//   
HIGH = not pressed (not empty) 
//   
LOW  = pressed (empty) 
const int LIMIT_SWITCH_PIN = 8; 
// LED pins 
const int GREEN_LED_PIN  = 9;   // Running 
const int BLUE_LED_PIN = 10;   
const int RED_LED_PIN    = 11;  // Empty, both -> Paused 
// ===================== DERIVED VARIABLES ===================== 
AccelStepper stepper(AccelStepper::DRIVER, STEP_PIN, DIR_PIN); 
float mmPerStep      
= 0.0; 
float stepsPerSecond = 0.0; 
Resin Rebels 8 
// Pump state machine 
enum PumpState { 
  STATE_PAUSED, 
  STATE_RUNNING, 
  STATE_EMPTY 
}; 
 
PumpState pumpState = STATE_PAUSED; 
 
// ===================== HELPER FUNCTIONS ====================== 
 
void updateLEDs() { 
  switch (pumpState) { 
    case STATE_RUNNING: 
      digitalWrite(GREEN_LED_PIN, HIGH); 
      digitalWrite(BLUE_LED_PIN, LOW); 
      digitalWrite(RED_LED_PIN, LOW); 
      break; 
 
    case STATE_PAUSED: 
      digitalWrite(GREEN_LED_PIN, HIGH); 
      digitalWrite(BLUE_LED_PIN, LOW); 
      digitalWrite(RED_LED_PIN, HIGH); 
      break; 
 
    case STATE_EMPTY: 
      digitalWrite(GREEN_LED_PIN, LOW); 
      digitalWrite(BLUE_LED_PIN, LOW); 
      digitalWrite(RED_LED_PIN, HIGH); 
      break; 
  } 
} 
 
// Compute stepper speed (microsteps/s) from flow rate and syringe geometry 
void computeStepperSpeed() { 
  // 1) Cross-sectional area of syringe (mm^2) 
  //    A = π * (d^2) / 4 
  float area_mm2 = 3.14159265f * (syringeDiameter_mm * syringeDiameter_mm) / 4.0f; 
 
  // 2) Volumetric flow rate: mL/min -> mm^3/min (1 mL = 1000 mm^3) 
  float vol_mm3_per_min = flowRate_mL_min * 1000.0f; 
 
  // 3) Plunger speed in mm/min 
  float mm_per_min = vol_mm3_per_min / area_mm2; 
 
  // 4) Convert to mm/s 
  float mm_per_sec = mm_per_min / 60.0f; 
 
  // 5) Distance per microstep (mm/step) 
  mmPerStep = LEADSCREW_PITCH_MM_PER_REV / (float)STEPS_PER_REV; 
 
  // 6) Steps per second (now microsteps/s) 
  stepsPerSecond = mm_per_sec / mmPerStep; 
 
  // AccelStepper on Uno: max ~1000 steps/s (here, microsteps/s) 
  if (stepsPerSecond > 1000.0f) { 
    stepsPerSecond = 1000.0f; 
  } 
  if (stepsPerSecond < 0.0f) { 
    stepsPerSecond = 0.0f; 
  } 
 
Resin Rebels 9 
  stepper.setSpeed(stepsPerSecond); 
} 
 
// ========================= SETUP ============================= 
 
void setup() { 
  // Pin modes 
  pinMode(BUTTON_PIN, INPUT_PULLUP);           // or INPUT_PULLUP if wired that way 
  pinMode(LIMIT_SWITCH_PIN, INPUT_PULLUP); 
 
  pinMode(GREEN_LED_PIN, OUTPUT); 
  pinMode(BLUE_LED_PIN, OUTPUT); 
  pinMode(RED_LED_PIN, OUTPUT); 
 
  if (ENABLE_PIN >= 0) { 
    pinMode(ENABLE_PIN, OUTPUT); 
    digitalWrite(ENABLE_PIN, LOW);      // LOW to enable driver (depends on driver) 
  } 
 
  // Stepper configuration 
  stepper.setMaxSpeed(1000.0);          // REQUIRED: max 1000 steps/s on Uno 
  // Set initial speed; real value computed below 
  stepper.setSpeed(0.0); 
 
  // Do float math once at startup 
  computeStepperSpeed(); 
 
  // Start in paused state 
  pumpState = STATE_PAUSED; 
  updateLEDs(); 
} 
 
// ========================== LOOP ============================= 
 
void loop() { 
  // Check limit switch: syringe empty? 
  bool limitActive = (digitalRead(LIMIT_SWITCH_PIN) == HIGH);  // pressed = empty 
 
  if (limitActive) { 
    pumpState = STATE_EMPTY; 
  } else { 
    // Not empty: state controlled by latching button 
    int buttonState = digitalRead(BUTTON_PIN); 
 
    // If button HIGH = ON (start), LOW = OFF (pause) 
    if (buttonState == LOW) { 
      pumpState = STATE_RUNNING; 
    } else { 
      pumpState = STATE_PAUSED; 
    } 
  } 
 
  // Act on current state 
  if (pumpState == STATE_RUNNING) { 
    // Call as often as possible → constant speed 
    stepper.runSpeed(); 
  } else { 
    // Do NOT call runSpeed() → motor stops 
  } 
 
  updateLEDs(); 
}
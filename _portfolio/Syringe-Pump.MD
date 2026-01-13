---
title: "Syringe Pump"
excerpt: "This pump is able to dispense liquids with incredible accuracy, requiring a few 3D printed parts and some electrical prototyping"
header:
  teaser: /assets/img/Resin Rebels Syringe Pump.jpg
gallery:
  - image_path: assets/img/Resin Rebels Syringe Pump.jpg
  - image_path: assets/img/Electrical Wiring SP.jpg
   
---
 
# Features

* Extreme Accuracy 
  * For a 10 mL syringe, this pump can disperse as little as 0.000451 mL/min, and as much as 44.797 mL/min. 
* Multiple Syringe Size Functionality 
  * This pump is able to handle both a 10 mL and 20 mL syringe while still operating with full functionality. A small adjustment piece is located on the side of the carriage for the linear actuator, which can be moved and then tightened to adjust for whichever size syringe is needed and so the limit switch is still able to be pressed (which stops the pump when the syringe is empty).
* User Feedback 
  * A small LED is located on the side of the pump to relay what state the syringe pump is in. A green light appears when it is running, a yellow light when the user pauses the pump using the button, and a red light when the pump has run out of liquid.
* Waterproofing 
  * Safety was kept in mind when designing this pump, making sure that there are minimal areas for water to enter into the electrical components located in the box beneath the linear actuator. The gaps are either blocked with rubber stoppers, too tight for water to fit in next to the wires, or located in positions where it is highly unlikely to encounter water or other liquids.

# Instructions on Use

* Setup
  * To set up the pump, the only adjustments that need to be made is adjusting the small component on the side of the carriage to fit the syringe size desired, and then also altering that value in the arduino code, alongside the desired flow rate (linked below). 
  * Fill the syringe with the desired liquid, and place the handle of the syringe in the narrow slit on the stationary mount, making sure the back of the syringe is pressed against the carriage.
  * Download the new code onto the arduino itself, and the system is ready to begin pumping.
* Starting / Stopping
  * The latching button can be pressed to start the pump with the desired speed, and can be pressed again in order to pause the machine.

# CAD Model
<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH90d2dQT28d5b602811545c8fad0af2c526?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

# Off-The-Shelf Parts Required

| Item        | Quantity    |
| ----------- | ----------- |
| 250 mm Lead Screw w/ 2mm Pitch and 8 mm Lead      | 1       |
| 1/4" x 8mm Flexible Coupling   | 1        |
| 200 mm Linear Rod w/ 8 mm Diameter | 2 |
| LM8UU Linear Bearing for 8 mm Diameter Rod | 2 |
| 2040 Aluminum Extrusion 1' Length | 1 |
| Nema 17 Stepper Motor | 1 |
| MEAN WELL RQ-65D AC-DC Power Supply Quad Output 5V 12V 24V 4 AMP | 1 |
| Arduino Uno | 1 |
| A4988 Stepper Driver | 1 |
| Small Breadboard | 1 |
| Panel Mount Latching Push Button | 1 |
| Limit Switch | 1 |
| RGB Common Cathode LED | 1 |

# 3D Printed Parts Required

| Item        | Quantity    |
| ----------- | ----------- |
| Base Enclosure    | 1  |
| Front Panel  |   1   |
| Lid to Enclosure | 1 |
| Motor Mounting Plate | 1  |
| Linear Actuator End Support | 1 |
| Syringe Handle Holder A | 1 |
| Syringe Handle Holder B | 1   |
| Carriage |  1  |

{% include gallery caption="Syringe Pump Gallery" %}

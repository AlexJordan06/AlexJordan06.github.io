---
title: "Generative Design Skateboard Truck" 
excerpt: "This is a skateboard truck made from Fusion's generative design process to accomodate a motor and forces required of a steel truck."
header:
  teaser: /assets/img/ZoomedTeaser.jpg
gallery:
  - image_path: assets/img/AgainstWall.jpg
  - image_path: assets/img/Side View.jpg
  - image_path: assets/img/detent_mechanism.jpg
  - image_path: assets/img/PhoneRender.jpg
  - image_path: assets/img/DetentHolderJPG.jpg
  - image_path: assets/img/DetentJPG.jpg
  - image_path: assets/img/GripJPG.jpg
  - image_path: assets/img/SpacerJPG.jpg
  - image_path: assets/img/SlidePartJPG.jpg
---
 
# Description

* Overall Project
  * The idea of this project was to create a skateboard truck prototype that would be able to handle a series of load cases, and could fit on the skateboard but be able to in theory be printed out of steel / aluminum. This was done through research about various loads, and applying those through the Fusion Generative Design workspace, paired with preserved and obstacle geometries to set boundaries for the design. After a model is generated, you can change what needs to be changed to make sure it will work with your specified purposes, which in this case replaced the hanger in the truck assembly. 

# Different Materials 

* Aluminum VS Steel
  * Aluminum
    * 
* CAD Model For Aluminum Truck
<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH90d2dQT28d5b602811656c2d3c34577db2?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

  * Steel
    * 
* CAD Model For Steel Truck
<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH90d2dQT28d5b602811656c2d3c34577db2?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>


![Phone Mount in Action](/assets/img/output_under25mb.gif)


# Forces and Loads

* Importance of Load Cases
  * Without the proper load cases, either excess or not enough material will be applied to the part you are generating. It can also generate in places that are not needed in order to maintain full functionality. This is due to the fact that the Fusion Generative Design workspace takes the loads and load cases given to it by the user and adds material only in spaces that are absolutely needed in order to satisfy the user's stresses they put on the part. It makes a large amount of designs, and compiles them to give the user a singular output that should provide them with the best model for their purpose. The idea of generative design as a whole is to lightweight parts, and that cannot occur if the forces and loads given to the program are incorrect and generate unneeded or too much material.

  * In order to determine which forces to use for my model, I used some of the information provided during in-class lectures, paired with Claude's Sonnet 4.6 engine to see where on the model these forces and their magnitudes would be best represented. Below is a chart of all the forces I used, and how they varied throughout the numerous load cases used.

* Forces Used For Truck

| Name of Force        | Magnitude    | Location      | Rationale    |
| ----------- | ----------- | ----------- | ----------- |
| Weight of Rider (Bearing Load)     | 1000 N    | On sides of truck where wheels are mounted, pointed towards ground | This I made to be 1000 N, as it is a bit more than what I weigh, and I want to be able to accomodate others as well. It is pointed straight down, as that is how the rider will be positioned. It changes which wheel is more affected depending on which way the rider is turning in the turning load cases.    |
| Weight of Motor (Moment)  | 10000 N        | On motor mount, facing perpendicular to face  | This needs to be a large amount and a moment due to the fact that it is dragging the plate inwards as it weighs on it, and then is offset by a bit due to the center of mass of the motor.   |
| Torque From Motor (Moment) | 8000 N | On motor mount, rotating towards acceleration  | This is 8000 N because the motor produces roughly 8 N*m at the shaft, so in mm that is 8000. It is a moment due to the fact that it needs to be able to demonstrate directionality of the acceleration and belt tension. |
| Friction (Force) | 20 N | On sides of truck where wheels are mounted  | These point in the opposite direction of acceleration, and change based on which wheel has more weight on it depending on turning or not. These are stronger when braking.    |
| Lateral Turning (Force) | 400 N | On sides of truck where wheels are mounted, pointed towards one side or the other (directionality of the turn)  | This points to one side to indicate the side of the turn, is takes into account the extra forces placed on the hanger in order to stretch / compress during that turn. |


![Phone Mount in Action](/assets/img/output_under25mb.gif)


# Generative Design As A Whole

  * Top down modeling was very useful in this project for a variety of reasons. For one, it has the ability that assemblies do to picture all parts that need to work together in one frame so the user can see how the parts will interact with one another. However, it also grants the user the ability to make new parts without needing to open up a new file and continuously flip back and forth updating different changes. It grants the best of both worlds in this regard. This also makes assembling joints very easy, so the bodies can move in tandem. 

* Assembly and Instructions
  * In order to put this together, there are really only 3 main pieces, with then 2 other helping pieces. The first piece is the one that connects to the bike. The circular structure slides on the end, and then 2 M3 fasteners screw in to tighten it to the bar. Then, the second piece, the detent mechanism that is connected to the base of the phone holder, slides in the circle that is on the back of the handle grip. If you include the spacer piece as well, the detent should sit flush with the inside of the grip, the flat part. From there, you can put the spring and ball into the hole located in the grip, making sure the ball slides in and aligns with one of the grooves in the detent. Then, put on the detent back plate, and then screw that in with an M5 fastener. From there, slide in the left side of the phone grip, which should be the last piece to assemble. Then, attach the two grips with 2 tightening springs via the hooks on the back. This allows the user to use a phone of any size, and still get the tight grip they desire. 

  * This works fairly well, with a little bit of looseness after using the detent for a while. If I were to try and recreate a better design, I would consider using a tighter fit between the detent and the handle grip, as the looseness allows for a bit of rattling. However, all things considered, it works pretty well for a prototyped design.

* Gallery Of Photos
  * Provided below is the collection of photos that were taken of the parts separately and together, with some being taken in person while some are renderings. Provided are the renderings of the entire assembly, but then also each individual part that allow for one to see how they all work in tandem.

{% include gallery caption="Phone Mount Gallery" %}

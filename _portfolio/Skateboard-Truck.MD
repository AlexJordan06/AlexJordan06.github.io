---
title: "Generative Design Skateboard Truck" 
excerpt: "This is a skateboard truck made from Fusion's generative design process to accomodate a motor and forces required of a steel truck."
header:
  teaser: /assets/img/Truck3.jpg
gallery:
  - image_path: assets/img/Truck1.jpg
  - image_path: assets/img/Truck2.jpg
  - image_path: assets/img/Truck3.jpg
  - image_path: assets/img/Standalone Truck.jpg
  - image_path: assets/img/Stainless Steel Render.jpg
  - image_path: assets/img/AluminumHangerRender.jpg
  - image_path: assets/img/Full Assembly Render Steel.jpg

---
 
# Description

* Overall Project
  * The idea of this project was to create a skateboard truck prototype that would be able to handle a series of load cases, and could fit on the skateboard but be able to in theory be printed out of steel / aluminum. This was done through research about various loads, and applying those through the Fusion Generative Design workspace, paired with preserved and obstacle geometries to set boundaries for the design. After a model is generated, you can change what needs to be changed to make sure it will work with your specified purposes, which in this case replaced the hanger in the truck assembly. 
  * I printed the prototype out of PETG at first, but that print failed, so I ended up on a design of PLA. Obviously this cannot withstand the same pressures that it could if it was made out of steel, but it is good for visualization and testing purposes.

![Full Assembly Render](/assets/img/Full Assembly Render Steel.jpg)

![Real Life Image](/assets/img/Standalone Truck.jpg)


# Different Materials 

* Aluminum VS Steel
  * Aluminum
    * ![Aluminum Render](/assets/img/AluminumHangerRender.jpg)
    * The main thing to see in this model is that there is far more material than in the stainless steel model. This is because aluminum isn't quite as strong, and the Fusion workspace accounts for that by adding more material in needed places. It would still theoretically work, it just is the case that it isn't the most material-effective solution.
    * CAD Model For Aluminum Truck
<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH90d2dQT28d5b602811b041df3245b80589?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

  * Steel
    * ![Steel Render](/assets/img/Stainless Steel Render.jpg)
    * This has far less material than the aluminum model, and comes from the fact that it is just a flat out stronger material. Stainless steel is more durable, and has a higher tensile strength, and the generative design workspace takes tension into great consideration, so that makes the steel option inherently more powerful and lighter. 
    * CAD Model For Steel Truck
<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH90d2dQT28d5b602811a83743fcde2efd0c?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>


![Gif For Turning Forces](/assets/img/GifForTurn.gif)


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


![Gif For Wheel Rotation With and Without Belt](/assets/img/GifForRotate.gif)


# Generative Design As A Whole

  * Why Generative Design is Great With SLS
    * For a majority of generative design outcomes, there are geometries and shapes that come out to be incredibly organic and almost look natural occuring. Due to this, it is almost impossible to make these parts via traditional subtractive manufacturing methods. That is why this design structure works so well with SLS, because the part is supported by the powder that it is made from, and can be cleaned without needing the supports to be removed like in filament 3D printing.
    * Printing my design from PLA taught me this valuable lesson, as it took a little over an hour of removing supports and post processing my finished prototype, while students who were able to print theirs out of nylon using the powder printer were able to finish post processing in as little as 10-15 minutes. 
    * Because SLS is usually a batch process as well, you are able to make many prototypes in one, all supported by the powders. This becomes a bit trickier if you are printing with metal, as it has to attach to the build plate, but overall the concept still applies. 

  * Applications in Industry
    * This technology is highly coveted in industries such as aerospace and automotive, as lightweighting parts is necessary and greatly reduces cost. Bulky frames and components can rack up unnecessary cost at a very quick rate, and being able to have as little material as possible while still accounting for all of the forces applied to the objects is very beneficial to the companies
    * An example of this is in this article: [NASA: AI-Designed Mission Hardware](https://www.nasa.gov/technology/goddard-tech/nasa-turns-to-ai-to-design-mission-hardware/). Throughout the article, NASA breaks down how generative design and lightweighting parts actually cut down around 2/3 of the weight of the EXCITE telescopes used, and how CAD specialists are able to make these designs so effective because instead of just one product, NASA makes, "thousands of bespoke parts every year."

  * Is it Useful?
    * I believe that generative design is incredibly useful, but that there are numerous drawbacks associated with it. The usefulness of the technology has already been covered earlier in this report: that lightweighting parts can really cut down cost of large scale manufacturing, and is good for prototyping possible models when paired with SLS technology. However, there are quite a few things that could go wrong in this process. For one, if the load cases are incorrect or missing, there is a high likelihood of part failure. This makes it pretty risky when used for advanced and costly missions such as the NASA one, as a broken piece can lead to devastating financial consequences, and in some severe cases, loss of human life. This can be counterracted through extensive research and professionals in their fields looking at the cases, but it doesn't eliminate the margin of error. Also, if the generative design model isn't completely effective, there is a chance that the part won't work even if the load cases are correct. 
    * While these drawbacks can be bad, on the whole I believe that when utilized correctly, the technology is incredibly effective and useful.


{% include gallery caption="Skateboard Truck Gallery" %}

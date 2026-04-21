---
title: "Rotatable Bike Phone Holder" 
excerpt: "This phone holder was designed to rotate to any position that the user sees fit, while still maintaining a grip on the bike handle"
header:
  teaser: /assets/img/ZoomedTeaser.jpg
gallery:
  - image_path: assets/img/AgainstWall.jpg
  - image_path: assets/img/Side View.jpg
  - image_path: assets/img/detent_mechanism.jpg
  - image_path: assets/img/PhoneRender.jpg
   
---
 
# Description

* Overall Project
  * The objective of this project was to create a phone mount for a bike, where the phone can clip onto the handlebar, and then also rotate to the user’s desired orientation. This was done by having a spring and ball bearing be the main components in a detent mechanism, which is pictured in the gallery. In order to make this compatible with any phone, I included a spring mechanism in the back that clenches two parts together that hold the side of the phone. I ended up printing all components out of PETG, as it was stronger and held up better than PLA, which will be useful when used outdoors, or for the detent mechanism in general. 

![Phone Mount in Action](/assets/img/output_under25mb.gif)

* Detent Mechanism
  * The way that this works is that there are 8 different grooves that are the diameter of a ball bearing, in a gear like fashion. This way, when the spring is pushing on the ball bearing, it slides into one of the grooves. However, it is smooth enough and with the tension of the spring being not too forceful, the user is able to turn the device and the ball slides down into the slot, before being extended once again by the spring once it has the room to via the next groove in the gear. 

* Changes in Iterations
  * After my first iteration worked but was a bit loose, I realized that I would need to tighten the bolt a bit to avoid any rattling in the mechanism. To account for this, I made the detent holder a little bit thicker, and that should fix the issue. The other problem was that when the detent was moving, the pieces of plastic were too thin to actually work and snapped off a bit. To fix this, I made just 4 settings of position rather than 8. This means that it is still a tight fit and rotation, but avoids the extra noise that comes with being too thin to work effectively. 
  * If I were to continue to improve on this model, I would try to print it in PLA as well to see if less strong plastic holds up just as well, and then I would also most likely see how it held up to an actual test of riding around with bumps and different external stresses (This could possibly be improved by using generative design and take into account forces, but thats for a future project).

# CAD Model
<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH90d2dQT28d5b602811656c2d3c34577db2?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

# Top Down Modeling Practices

  * Top down modeling was very useful in this project for a variety of reasons. For one, it has the ability that assemblies do to picture all parts that need to work together in one frame so the user can see how the parts will interact with one another. However, it also grants the user the ability to make new parts without needing to open up a new file and continuously flip back and forth updating different changes. It grants the best of both worlds in this regard. This also makes assembling joints very easy, so the bodies can move in tandem. 

* Assembly and Instructions
  * In order to put this together, there are really only 3 main pieces, with then 2 other helping pieces. The first piece is the one that connects to the bike. The circular structure slides on the end, and then 2 M3 fasteners screw in to tighten it to the bar. Then, the second piece, the detent mechanism that is connected to the base of the phone holder, slides in the circle that is on the back of the handle grip. If you include the spacer piece as well, the detent should sit flush with the inside of the grip, the flat part. From there, you can put the spring and ball into the hole located in the grip, making sure the ball slides in and aligns with one of the grooves in the detent. Then, put on the detent back plate, and then screw that in with an M5 fastener. From there, slide in the left side of the phone grip, which should be the last piece to assemble. Then, attach the two grips with 2 tightening springs via the hooks on the back. This allows the user to use a phone of any size, and still get the tight grip they desire. 

  * This works fairly well, with a little bit of looseness after using the detent for a while. If I were to try and recreate a better design, I would consider using a tighter fit between the detent and the handle grip, as the looseness allows for a bit of rattling. However, all things considered, it works pretty well for a prototyped design.

{% include gallery caption="Phone Mount Gallery" %}

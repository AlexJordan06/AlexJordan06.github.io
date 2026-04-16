---
title: "Rotatable Bike Phone Holder" 
excerpt: "This phone holder was designed in Fusion 360's top down modeling feature, and is able to rotate to any position that the user sees fit, while still maintaining a grip on the bike handle"
header:
  teaser: /assets/img/Pliers propped Up.jpg
gallery:
  - image_path: assets/img/Pliers propped Up.jpg
  - image_path: assets/img/Pliers Flat on Table.jpg
   
---
 
# Description

* Overall Project
  * This project was focused on making a pair of pliers that would not only work with large objects, but be able to successfully pick up a resistor with relative ease off of a surface to demonstrate its proficiency. The interior of the pliers was printed with TPU-95A, which is far more flexible than the PLA used to print the harder handles and plier piece. The flexibility of the middle piece, when paired with the slicer settings being modified to only have infill for that area of the print for added flexibility, allow the pliers to move as a unit when pinched from the sides of the handle and work effectively. 

![Pliers In Action](/assets/img/GIF For Multimaterial Pliers.gif)

* Design Rationale
  * I was fortunate enough to only need one printed iteration which worked perfectly as intended. This was due to the fact that I utilized Fusion 360 CAD design, and made sure that the pliers were exactly as I wanted them before I printed even a prototype. This allowed for much faster creation of the final project, and did not waste any material as well. The jaw length is almost 20 mm, and the width between them in their resting state is right around 10 mm. When pinched, the pliers favor coming to a point at the end rather than having uniform force across the face of the contact area.

# CAD Model
<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH90d2dQT28d5b6028117d03d04fa6b15fd1?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

# Top Down Modeling Practices

  * Top down text

* Assembly and Instructions
  * In order to put this together, there are really only 3 main pieces, with then 2 other helping pieces. 

# Modified Print Settings For Flexible Portion (TPU 95 w/ 0.6 brass nozzle)

| Setting | Value Used | Reasoning |
| ------- | ---------- | --------- |
| Perimeters | 3 | The parts that connect to the hardened portions of the pliers need to be strong enough to withstand some force, so I wanted them completely filled in |
| Horizontal Top Layers | 0 | Without any top layers, this exposes the infill and allows for even more flexibility of the piece without hinderance by a completely filled layer |
| Horizontal Bottom Layers | 0 | Similar reasoning as above |
| Sparse Infill Pattern | Rectilinear | The rectilinear pattern allows for bending and flexing along the axes needed in order to pinch the end of the pliers |
| Infill Density | %18 | I found that this percentage of infill allowed for structural stability, while still providing a flexible piece in the center |


{% include g

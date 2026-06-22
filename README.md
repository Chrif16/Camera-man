# Camera Man

a camera/phone stand that follows you when you move from left to right using two parallel ultrasonic sensors. containing an arduino nano and a servo motor to turn the stand. and its charged with a usb c port on the bottom. you can also fix anything you want and tighten it on the top.
i got the inspiration from when i went to a friends house and he mentioned that he wanted to get into streaming thus he bought a phone stand that moves when you move around so when i went home  wondered how it worked and wanted to try if i could recreate it from my imagination.<img width="1920" height="632" alt="assemblytjht" src="https://github.com/user-attachments/assets/c9f13d85-40b9-4975-8379-13c0e4c34b7b" />
<img width="1920" height="813" alt="assemblygnf,hgu;i" src="https://github.com/user-attachments/assets/1711399a-b122-4706-9900-ed7dce7e20b4" />
# First concept
<img width="1060" height="817" alt="image" src="https://github.com/user-attachments/assets/f094f926-245c-4e4b-9990-db4085fe1521" />

# Schematics
the micro controller used is an arduino nano and the project moves with a servo motor and the two sensors are a parallax ping a 3 pin ultrasonic sensor and the battery powers everything and its charged with the tp4056 charging module 
<img width="1267" height="775" alt="image" src="https://github.com/user-attachments/assets/eedd6e21-3b48-432b-9c10-6b4559f3cdc3" />

# 3D model
the knob turns to either tighten the two bars or push them away so that you can fix whatever you want between them
<img width="957" height="782" alt="image" src="https://github.com/user-attachments/assets/63801c68-e17f-4ff7-8c05-f65712b225bf" />
<img width="871" height="737" alt="image" src="https://github.com/user-attachments/assets/5cb68fcd-7af4-495c-8e45-f787b8568295" />
<img width="837" height="737" alt="image" src="https://github.com/user-attachments/assets/f663d23d-46a3-4064-94c9-3a495e932519" />
the servo motor and arduino etc are mounted to the bottom piece and the two ultrasonic distance sensors are mounted to the top piece
<img width="657" height="658" alt="image" src="https://github.com/user-attachments/assets/dbcbd77f-d976-41fb-9e33-af17ffd2cc11" />

# firmware

<img width="1052" height="883" alt="image" src="https://github.com/user-attachments/assets/82d8a522-7853-4e13-adf4-6d6af2a6edd1" />

the script calculates the angle of the object in front of the ultrasonic sensors and checks if the position of the object is right or offset then it corrects the angle with the servo

# BOM

* arduino nano
* usb c lithuim battery charger module TP4056
* MG 996R servo motor
* 330mah lithium battery
* US-100 ultrasonic distance sensors (or parallax ping but i just found out theyre impossible to buy for a reasonable price but their the same dimansions so the us 100 should in theory work just as well)
* jumper wires
# How to build:

For screws and similar items, it is recommended to find the cheapest in your location. first 3d print all the parts in the cad folder except for the assembly then press fit the two sliding parts on the main body, then put the turning cog between the sliding parts, then screw the knob and the stopper on the turning part, then screw in place the servo and the arduino and the ultrasonic sensor then press fit the lithium battery and the charging module on the bottom part, then solder the wires between the components and place the top part on the bottom part in a way that makes it so that the servo fits into place

# Zine

<img width="3508" height="4960" alt="fcvghbj" src="https://github.com/user-attachments/assets/a3a3fdcb-e270-4ae6-bae9-c7857f7a62a8" />

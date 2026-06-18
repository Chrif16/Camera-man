# Camera Man

a camera/phone stand that follows you when you move from left to right using two parallel ultrasonic sensors. containing an arduino nano and a servo motor to turn the stand. and its charged with a usb c port on the bottom. you can also fix anything you want and tighten it on the top.
i got the inspiration from when i went to a friends house and he mentioned that he wanted to get into streaming thus he bought a phone stand that moves when you move around so when i went home  wondered how it worked and wanted to try if i could recreate it from my imagination.<img width="1920" height="632" alt="assemblytjht" src="https://github.com/user-attachments/assets/c9f13d85-40b9-4975-8379-13c0e4c34b7b" />
<img width="1920" height="813" alt="assemblygnf,hgu;i" src="https://github.com/user-attachments/assets/1711399a-b122-4706-9900-ed7dce7e20b4" />

# Schematics

<img width="1267" height="775" alt="image" src="https://github.com/user-attachments/assets/eedd6e21-3b48-432b-9c10-6b4559f3cdc3" />

# 3D model

<img width="957" height="782" alt="image" src="https://github.com/user-attachments/assets/63801c68-e17f-4ff7-8c05-f65712b225bf" />
<img width="871" height="737" alt="image" src="https://github.com/user-attachments/assets/5cb68fcd-7af4-495c-8e45-f787b8568295" />
<img width="837" height="737" alt="image" src="https://github.com/user-attachments/assets/f663d23d-46a3-4064-94c9-3a495e932519" />
<img width="657" height="658" alt="image" src="https://github.com/user-attachments/assets/dbcbd77f-d976-41fb-9e33-af17ffd2cc11" />

# firmware

<img width="1052" height="883" alt="image" src="https://github.com/user-attachments/assets/82d8a522-7853-4e13-adf4-6d6af2a6edd1" />

the script calculates the angle of the object in front of the ultrasonic sensors and checks if the position of the object is right or offset then it corrects the angle with the servo

# BOM

* arduino nano
* usb c lithuim battery charger module TP4056
* MG 996R servo motor
* 330mah lithium battery
* US-100 ultrasonic distance sensors (or parallax ping but i just found out theyre impossible to buy for a reasonable price)
* jumper wires
# How to build:


# MechantronicFlexArm

## Overview 
This project was created in 2019 as a final grade 11 computer engineering project.
By going over various yotube videos concerning servo motors, flex sensors, etc. I was able to create my very own flex sensor controlled mechatronic arm.
With a budget of just over $100, the mechatronic was controlled by a glove with flex sensors that in turn rotated servo motors.

## Introduction

The system being built is a robotic hand that can be controlled by a user. The main intention of this hand is to be a prosthetic for amputees who have either lost their hand, or were born without one. The system will be controlled by using a glove that the user can wear on their other hand, this glove can then control the robotic hand, the fingers of the hand will retract or extend depending on the user’s movement with the glove. 
Although there are companies in the world trying to create bionic prosthetics for users, my objective is to start off by creating this robotic hand to then upscaling it to creating a robotic arm and eventually by creating an exo-skeleton that user’s can control, but that of course is the future of what I'm trying to achieve.

## Initial Prototype Demo
https://user-images.githubusercontent.com/88639067/133144575-fcb4d2ee-6f70-45c5-8271-8921c26718a8.MP4

## Folder Structure
```
FlexArm_2019
│   README.md
│
└───FlexArm_2019
│   README.adoc         => Arduino sketch folder
│   sketch.json         => Arduino sketch folder
│   FlexArm_2019.ino    => Arduino sketch folder

```

## Research and Requirements

As you can imagine there is an obvious struggle with accomplishing everyday tasks when you are an amputee, whether that’s completing tasks without a hand, an arm, or even a leg. The trend around the robotic prosthetic market is that it’s expected to grow with a compound annual growth rate (CAGR) of up to 9.5% from 2017 to 2024. The factors that have caused this trend are due to increasing medical conditions such as diabetes, vascular disorder, and the increase of older generation populations. With this in mind many consumers need a way to revitalize their limbs in order for them to carry out everyday tasks. Robotic prosthetics are an artificial substitute for a person with missing limbs.

Since my product will be a baseline build, I will use cheap every material that are easy to work with. In order for me to build the frame itself without the technical parts, I’ll need to use a thin plank of wood (for the forearm), styrofoam (for the fingers), extremely durable string, rubber bands, zip ties, clips, different types of tape, and bolts (to secure the arm/hand in place). For the technical components, i’ll be needing SG90 motors, an arduino UNO, and wires to attach everything together. I believe that overtime the materials, I use will definitely change depending on how well they work.

Although there are many concepts and designs for robotic prosthetics revolving bionic arms/hands, there are only a few companies as of now who have started releasing their very own version of robotic arms/hands for amputees, such companies include “open bionics”, a company who had been working to create robotic arms for amputees since 2014, the company is now working with Disney to create covers for their robotic arms, these covers are mainly targeted to child amputees, giving the arms ‘super hero covers”. There’s also Mobius Bionics, another company who has put in over a decade of work in order to create robotic arms. Mobius Bionics offers their consumers 3 different type of configurations when it comes to purchasing their arm. There’s the shoulder configuration (robotic arm attaches to the shoulder), the humeral configuration (robotic arm attaches to the humerus of the arm) and the radial configuration(robotic arm attaches to the radius of the arm).

Safety is one of the top priorities when building the model. My first concern is to make sure the electrical parts that I am using to create the model are all legal, and certified parts in Canada, I will also document these parts to be traced back in case something goes wrong. With those out of the way my other concern is that everything from the chassis of the vehicle is compatible with the internal parts as well.

Some of the constraints I have to keep in my mind is the time and cost I have in order to create this model. Although i have a rough idea as to how much the overall plan to build this will cost i also want to make sure to buy the best parts in order to power the robotic hand. My other concern is time, since I have a rough idea as to the different variations of the robotic handI will build, on of my variations includes allowing the hand to be controlled by a bluetooth module attached to the robotic hand and the glove that controls it. 

The following are my must haves:
-	The hand must be able to contract and retract without any concern
-	Must have a strong chassis and all parts must be compatible with one another
The following are my desirables:
-	The robotic hand can be controlled via bluetooth module
-	Try to create a robotic arm with the ability to move elbow as well

## Prelimaniry Designs

![image](https://user-images.githubusercontent.com/88639067/133153808-6f49d95c-423e-40dc-9986-0360bf9bc378.png) 


## BOM

| Part      | Description    | Quantity     |
| :------------- | :----------: | -----------: |
|  ELEGOO UNO | Project starter kit that includes basic materials for the project such as jumper cables, breadboard, & arduino board   | 1   |
| SG90 MICRO 9G   | Servos used to pull on strings to move hand | 1   |
| Aluminum Tape| Tape needed to create flex sensors | 1 |
| Clips  | Cotter pin 3/32X1 steel | 40  |
| Zip Ties  | Used with aluminium tape to create flex sensors | 5   |
| Styrofoam   | Foam block to mold into hand | 2   |
| Thin Wood Plank| WOOD STRIP 1/8 X 12 X 24IN CRAFT PLYWOOD | 2   |
| Thin Wood Rod   | WOOD STRIP 1/8 X 1/8 X 24IN BASSWOOD| 1   |




## References

(n.d.). Retrieved from https://circuitdigest.com/microcontroller-projects/servo-motor-control-by-flex-sensor-using-arduino
Arduino, M. (2017, January 02). Make a Flex Sensor for Robotic Hand and Arduino | DIY. Retrieved from https://www.youtube.com/watch?v=b7zT94WV-Ek
Codebender_cc, & Instructables. (2017, October 06). How to Use a Flex Sensor - Arduino Tutorial. Retrieved from https://www.instructables.com/id/How-to-use-a-Flex-Sensor-Arduino-Tutorial/
Hack Attack Tutorial: Controlling a Servo using a Flex Sensor » Circuit-Help. (2017, February 15). Retrieved from https://circuit-help.com.ph/tutorial-flexing-servo/
Hack Attack Tutorial: Controlling a Servo using a Flex Sensor » Circuit-Help. (2017, February 15). Retrieved from https://circuit-help.com.ph/tutorial-flexing-servo/
Official, U. V. (2017, January 20). How to interface flex sensor and servo motor with arduino. Retrieved from https://www.youtube.com/watch?v=MNiN3ye9hvY
Robojax. (2018, May 22). Control Servo motor with push button with Arduino. Retrieved from https://www.youtube.com/watch?v=7woqNH_qby4

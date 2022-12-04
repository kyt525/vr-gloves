# VR-Gloves

UIUC Pulse 2022 hardware competition - Team Little Giants (Ayush Garg, Binh-Minh Nguyen, Kathryn Thompson, Ramsey van der Meer)

We are Ayush Garg (F), Binh-Minh Nguyen (F), Ramsey Van Der Meer (F), and Kathryn Thompson (F), our team name is the Little Giant and we are all freshmen.

We are competing in the beginner level Hardware competition.

We attempted to create a project investigating ways to interact with the digital though physical methods. In our brainstorming phase we immediately thought to create a device that would free us from any peripheral devices, allowing us to interact with the digital through natural and intuitive body movements. We chose to use a glove and EKG sensor to measure body movements and translate this into digital inputs using an Arduino. Leveraging this system we were able to control simple movements in video games and interact with media controls.

Diving into the technicals of this project we use EKGs and strain gauges as the projects input controls. We used a voltage divider setup to gauge the change in resistance across the stress gauges due to any bend in the finger. We then used an Arduino Micro to translate said movement into keystrokes specifically assigned to each finger.

We tested our ideas’ functionality by assembling it onto a breadboard and then proceeded to make a final product on a protoboard.

Based on the input registered by the analog input pins, we created a program that translates the movements of different fingers into game controls.

One of the biggest barriers that we faced was integrating the EKG into the project. There seemed to be a significant delay between the input and the output. Our first intuition, that this was due to a hardware issue stood corrected. We soon came realize that it was indeed the muscle that took a long time to fully relax. Despite directing a significant portion of our efforts towards alleviating this issue, we couldn’t get a reliable enough output signal to work with and so our project remains in the works.

Looking back at the project, our biggest takeaway would be learning how to work with stress gauges and working with the relevant Arduino libraries.

## The Glove

![Glove palm side](/images/gloves-palm.pdf)
![Gloves outside](/images/gloves-outside.pdf)

## Circuitry

Schematic:
![Schematic](/images/schematic-screenshot.png)

## Youtube video

[link to youtube video](https://youtu.be/0L5U58G-sE0)
[![VR-Gloves youtube video](/images/gloves-video.jpg)](https://youtu.be/0L5U58G-sE0)

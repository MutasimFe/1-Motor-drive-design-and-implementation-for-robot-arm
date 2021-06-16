# First-Task---Robot-Arm-

5 Servo Motors controlled by a potentiometer ( Arduino based ) 

This is the connection of 5 servo meters that can be controlled by the variable resistors ( potentiometers ) as shown in the below figure. 

![First Task - Servo motor controlled potentiometer using the concept of PWM (ARDUINO Based)](https://user-images.githubusercontent.com/85455361/122138209-ea621700-ce4e-11eb-9069-70c81e43f597.png)

The next video shows that each servo motor can be controlled by a specific potentiometer as programmed in code. 

https://user-images.githubusercontent.com/85455361/122138513-9146b300-ce4f-11eb-8652-98e2c1bfe0ab.mp4

The main points that must be noted are: 

1-Each servo meter programmed to work within the first 90 degrees ( can be adjusted by making a small change in the code ).

2-Each servo meter can be controlled by only one variable resistor ( potentiometer ) as selected in the code. 

3-The transistor is connected as shown below 

![Tra](https://user-images.githubusercontent.com/85455361/122139269-49c12680-ce51-11eb-99b8-b63b6043ec34.jpg)

to make the transistor as a short circuit 

the idea is the same as the below figure 

![nMOS](https://user-images.githubusercontent.com/85455361/122139629-116e1800-ce52-11eb-8aa7-d2109df537a2.jpg)

the transistor in this connection is used to: 

  a-regulate the voltage.

  b-avoid the high currents passing through the servo meters for safety purposes.
  
 4- The values of resistors Rin and RL in the transistor chosen based on testing not a theoretical calculations.

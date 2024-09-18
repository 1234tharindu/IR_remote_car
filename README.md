# <div align="center"><b><i>IR REMOTE CONTROL CAR WITH ARDUINO </i></b></div>

When the car is powered on, the L293D motor shield and the IR receiver module are activated through the Arduino UNO board. The IR receiver then captures the IR signals. When the IR remote sends values that match the program, the gear motors rotate forward or backward according to those values. The motor rotation is controlled by the motor driver shield.

A key point to remember when assembling this car is that, despite using the L293D motor driver shield, the motor 1 and motor 2 terminals are not functional with the IR receiver library we are using. Therefore, only the motor 3 and motor 4 terminals can be used.

> Used Programming Language (C++) 

<a href="https://www.w3schools.com/cpp/default.asp"><img src="https://img.icons8.com/color/344/c-plus-plus-logo.png" height="50px"><a>

# Hardware Required

* Arduino UNO board x 1 
* IR receiver module x 1 
* L293D motor driver x 1
* Gear motor x 4
* Robot wheel x 4
* Li-ion battery x 2
* Li-ion battery holder x 1
* Foam board
* Jumper wires

# Software Required

* Arduino IDE

# The process of this car

I created the IR remote control car I am using the Arduino UNO. Also, the IR receiver module is mainly used to control this robot. Therefore, we can control this robot using any kind of IR remotes. The IR remote control Robots is based on the Arduino UNO board and L293D motor driver shield.

When the Car is powered on, the L293D motor shield and IR receiver module are activated via the Arduino UNO board. Also, the IR receiver the IR rays. Then, when the values are received from an IR remote that matches the program, the gear motors rotate forward and backward according to those values. The motor rotation is done by the motor driver shield.

The special thing needs to keep in mind while making this robot car is that even though we used the L293D motor driver shield, the motor 1 and motor 2 terminals could not be used. This is because these motor1 and motor2 terminals are not functional with the IR receiver library we use. Therefore, we can only use motor3 and motor4 terminals.


# Program code

* IR library - [download](https://drive.google.com/drive/folders/1Oe0fojjEqTBYSOu_K4_iMUCqiIEPxtzq?usp=drive_link)
* AFmotor library - [download](https://drive.google.com/drive/folders/1zLPLWc0rsoOAwTbopPMqtnVwAZS5ThIj?usp=drive_link)
* The complete program of this project - [download](https://drive.google.com/file/d/1zSfZR2qmxamdqdRbQs81iOWvhr87ywCe/view?usp=drive_link)


# Run Locally

- Clone your forked repository
    
    ```
    git clone https://github.com/1234tharindu/IR_remote_car.git
    ```


### Video Clip
#
https://github.com/user-attachments/assets/203a773a-770d-4208-8f7c-749f09254d76







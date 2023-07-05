# Robo-Arm

![Robo-Arm](https://github.com/e-for-eshaan/Robo-Arm/assets/76566992/ae6f095e-06bc-4f36-b832-e81155c0d52b)

## Description

Robo-Arm is a DIY robotic arm project built using popsicle sticks and controlled by an Arduino board. It features two servo motors for rotational movement and a claw mechanism for gripping objects.

## Functionality

The robotic arm's functionality is as follows:

### Degree of Freedom (DOF)

The arm has two servo motors: one for rotating the base and another for rotating the end of the arm. Additionally, a third servo motor controls the claw mechanism.

### Precise Control

To ensure precise control of the arm's movements, a potentiometer and the analog-digital converter of the Arduino Mega are utilized. By comparing digital values and applying a threshold, jitter and noise are filtered out.

![Claw Lever](https://github.com/e-for-eshaan/Robo-Arm/assets/76566992/7339e12d-999a-4cd5-93ba-b5f7651d9268)

### Shadow Clone

The project incorporates a duplicate arm called the "shadow clone," which uses potentiometers as joints. Moving the potentiometer-based clone allows the real robot arm to assume the same position.

![Shadow Function](https://github.com/e-for-eshaan/Robo-Arm/assets/76566992/ab67ad6b-7f03-4dcb-8fbf-f5408a7fe183)

### Power Supply

The entire system, including the servo motors, is powered by the Arduino board, operating at 5 volts. Three 9G servo motors are used for the arm's movement.

### Communication

Communication between the arm and the controlling device (Arduino) is established through jumper cables. The shadow clone sends postural data to the Arduino, which converts it into degrees for the servo motors to assume the desired positions.

### End-Effector

The robotic arm features a custom-built claw mechanism. The framework is constructed using popsicle sticks, and a repurposed hair clip serves as the claw for gripping objects.

![Robo Arm Claw](https://github.com/e-for-eshaan/Robo-Arm/assets/76566992/8f53d1d8-b9c8-4c0d-b8d8-8529908033ef)

## Dimensions

![Dimensions](https://github.com/e-for-eshaan/Robo-Arm/assets/76566992/eaa09e46-f21f-45ff-b5cc-60106c5fd982)

Please refer to the provided image for the dimensions of the Robo-Arm.

## Usage

To replicate or further develop the Robo-Arm project, follow these steps:

1. Clone the repository: `git clone https://github.com/e-for-eshaan/Robo-Arm.git`
2. Set up the required hardware components as described in the project.
3. Install the necessary software dependencies and libraries.
4. Upload the Arduino code provided in the repository to the Arduino board.
5. Connect the jumper cables and ensure proper wiring.
6. Run the program and control the arm's movements using the shadow clone.

## Future Improvements

Here are some potential areas for improvement:

- Incorporating additional sensors or feedback mechanisms for enhanced functionality.
- Implementing more advanced control algorithms to achieve smoother and more precise movements.
- Designing and constructing a sturdier and more robust frame for the

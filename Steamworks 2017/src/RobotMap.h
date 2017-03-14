#ifndef ROBOTMAP_H
#define ROBOTMAP_H

//Begin CANTalon CAN IDs below
const int front_left_motor_id = 1;
const int front_right_motor_id = 2;
const int back_left_motor_id = 3;
const int back_right_motor_id = 4;

const int climbing_motor_one_id = 5;
const int climbing_motor_two_id = 7;

const int shooter_motor_one_id = 6;
const int shooter_motor_two_id = 8;

const int intake_motor_one_id = 9;
const int intake_motor_two_id = 11;

const int hopper_rotation_motor_id = 10;

//Shooter Speed Constants
const int shooter_set_speed = 1850;
const int shooter_target_speed = 21000;

#endif  // ROBOTMAP_H

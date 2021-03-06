#ifndef PORTS_H
#define PORTS_H
// OFFSET
static const int GEAR_POT_OFFSET                        = 0;
// ***************** PWM PORTS *****************
static const int LEFT_DRIVE_MOTOR_A_PWM_PORT            = 0; //front left
static const int LEFT_DRIVE_MOTOR_B_PWM_PORT            = 1; //back left
static const int RIGHT_DRIVE_MOTOR_A_PWM_PORT           = 2; //front right
static const int RIGHT_DRIVE_MOTOR_B_PWM_PORT           = 3; //back right
static const int CLIMBER_MOTOR_PWM_PORT                 = 6;
static const int GEAR_INTAKE_MOTOR_PWM_PORT             = 5;
static const int GEAR_TILTER_MOTOR_PWM_PORT             = 4;
static const int CLIMBER_LOCKER_SERVO_PWM_PORT          = 7;

// ***************** PDP CHANNELS *****************
static const int LEFT_DRIVE_MOTOR_A_PDP_CHAN           = 12;
static const int LEFT_DRIVE_MOTOR_B_PDP_CHAN           = 13;
static const int RIGHT_DRIVE_MOTOR_A_PDP_CHAN          = 14;
static const int RIGHT_DRIVE_MOTOR_B_PDP_CHAN          = 15;
static const int CLIMBER_MOTOR_PDP_CHAN                = 16;

// ***************** DIGITAL I/O PORTS *****************
static const int LIGHTS_DIO_PORTS[]                    = {2, 3, 4, 5};
static const int LEFT_DRIVE_ENCODER_PORTS[]            = {9, 8};
static const int RIGHT_DRIVE_ENCODER_PORTS[]           = {7, 6};

// ******************* ANALOG IN PORTS*******************
static const int GEAR_POT                              = 0;

// ***************** MISC *****************

// ***************** SOLENOID PORTS *****************

// ***************** JOYSTICK USB PORTS *****************
//MAKE SURE JOYSTICKS ARE SET TO "D" position on back

static const bool USING_WIN_DRIVER_STATION             = true;
static const int DRIVER_JOY_USB_PORT                   = 0;
static const int OPERATOR_JOY_USB_PORT                 = 1;
// ***************** BUTTONS *****************

//Controller button ports

static const int DRIVE_DIRECTION_BUTTON_PORT           = 9;
static const int SHOOTER_RUN_BUTTON_PORT               = 1;

#endif

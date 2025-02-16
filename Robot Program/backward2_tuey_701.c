#pragma config(StandardModel, "EV3_REMBOT")
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//
int encoderLine1;
//*This will basically do like the first one but it will go in backward halfway and keep the encoder counts*//
task main()
{
turnLeft(360, degrees,50);
resetMotorEncoder(leftMotor);
//*The robot turns around 360 degrees and then it will run backwards*//
setMotorSpeed(leftMotor, -30);
setMotorSpeed(rightMotor, -30);

waitUntil(getMotorEncoder(leftMotor) < -1000 );
//* It will run the robot halfway to the black line and it will be unseccess but it is complete.*//
setMotorSpeed(leftMotor, 0);
setMotorSpeed(rightMotor, 0);

encoderLine1 = getMotorEncoder(leftMotor);
}

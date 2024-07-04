#pragma config(Sensor, S1,     rightColor,     sensorEV3_Color, modeEV3Color_Color)
#pragma config(Sensor, S2,     leftColor,      sensorEV3_Color, modeEV3Color_Color)
#pragma config(Sensor, S3,     colorSensor,    sensorEV3_Color)
#pragma config(Sensor, S4,     sonarSensor,    sensorEV3_Ultrasonic)
#pragma config(Motor,  motorA,          sonarMotor,    tmotorEV3_Large, PIDControl, encoder)
#pragma config(Motor,  motorB,          leftMotor,     tmotorEV3_Large, PIDControl, driveLeft, encoder)
#pragma config(Motor,  motorC,          rightMotor,    tmotorEV3_Large, PIDControl, driveRight, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	forward(1.4, rotations, 30);
	turnLeft(220, degrees, 30);
	resetMotorEncoder(leftMotor);
	setMultipleMotors(50, motorB, motorC);
	forward(5, rotations, 30);
	if(colorRed)
	{
		turnLeft(220, degrees, 30);
	}
	setMotorSpeed(motorB, 50);
	setMotorSpeed(motorC, 50);
	waitUntil(getColorName(colorSensor) == colorRed);
	forward(1.2, rotations, 30);
	turnLeft(220, degrees, 30);
	forward(2.5,rotations, 30);
	turnRight(220, degrees, 30);
	backward(1.5, rotations, 30);
	sleep(1000);
	forward(1.8, rotations, 30);
	turnLeft(218, degrees, 30);
	forward(24.5, rotations, 50);
	turnLeft(220, degrees, 30);
	forward(2, rotations, 50);
	setMotorSpeed(motorB, 50);
	setMotorSpeed(motorC, 50);
	waitUntil(getColorName(colorSensor) == colorRed);
	turnLeft(220, degrees, 30);
	forward(2, rotations, 50);
	turnLeft(230, degrees, 30);
	backward(1.3, rotations, 30);
	sleep(1000);
	forward(1.5, rotations, 30);
	turnLeft(232, degrees, 30);
	forward(28, rotations, 50);
	turnRight(220, degrees, 30);
	backward(1.3, rotations, 30);
	sleep(1000);
	forward(1.8, rotations, 30);

	turnLeft(220, rotations, 30);
	forward
	turnRight
	forward
	turnLeft


	setMotorSpeed(motorB, 50);
	setMotorSpeed(motorC, 50);
	waitUntil(getColorName(colorSensor) == colorRed);
	forward(1.3, rotations, 50);
	turnLeft(220, degrees, 30);
	forward(1, rotations, 30);



}

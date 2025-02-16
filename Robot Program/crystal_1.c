#pragma config(StandardModel, "RVW Mammalbot")
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{

	//  | The Program Begins |
	// The robot will wait for 2 seconds before executing commands.
	wait(1, seconds);
	// Track the line for 9 rotations of the motor encoders, up to the crystal.
	while (getMotorEncoder(rightMotor) < 3240) {
		lineTrackLeft(colorSensor, 25, 50, 0);
	}
	// The robot stops.
	stopAllMotors();
	// The robot will wait for 1 second before executing other commands
	wait(1, seconds);
	// The Robot will turn right at half power for 140 encoder counts (degrees).
	turnRight(140, degrees, 50);
	// The robot stops.
	stopAllMotors();
	// The robot will wait 1 second before executing other commands
	wait(1, seconds);
	// The robot will move forward at half power for .75 rotations.
	forward(.75, rotations, 50);
	// The robot will wait 1 second before executing other commands
	wait(1, seconds);
	// The vacuum (manipulatorMotor) is activated for 1 second, then it will stop.
	setMotor(mammalAttachment, -50);
	wait(1, seconds);
	stopMotor(mammalAttachment);
	// The Program Ends

}

#pragma config(StandardModel, "RVW Mammalbot")
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

/*+++++++++++++++++++++++++++++++++++++++++++++| Notes |++++++++++++++++++++++++++++++++++++++++++++++
H2 Lift Road - Fueling the Rocket (Natural Language)
- This program will cause the robot to drive forward from Sector 1 to the Ion Propulsion Fuel Barrel
	near map intersection G3, pick it up, and turn toward the F3 Intraplanetary Boost Pad.
- It will be up to you to add the ROBOTC code that causes the robot to drive onto the Boost Pad,
	further into the zone, and then release the Fuel Barrel onto the Fuel Station.
- ROBOTC must be in Natural Language mode for this program to run. You can set this in the top menu
	by going to Robot > Platform Type > Natural Language (EV3).
- Make sure that the GRIPPER attachment is selected on the bottom of the Operation Reset window.
- Remember that you can press the "Reset" button in the lower-left corner of the Operation Reset
	window to return to the Insertion Point every time you modify your ROBOTC code.
*	Please note that the values in this program were written for Mammalbot using a high-end computer.
	You may need to adjust the values in this program for your computer.

Robot Model: RVW Mammalbot

[I/O Port]          [Name]              [Type]                   [Description]
Motor Port A        manipulatorMotor    Motor w/ Encoder       	 Front gripper motor
Motor Port B        rightMotor          Motor w/ Encoder       	 Right side motor
Motor Port C        leftMotor           Motor w/ Encoder       	 Left side motor
----------------------------------------------------------------------------------------------------*/

task main()
{
	//  | The Program Begins |
	// The robot will wait for 2 seconds before executing commands.
	wait(2, seconds);
	// The robot will move forward at half power for 4.4 rotations.
	forward(4.4, rotations, 50);
	// The robot will wait for 1 seconds before executing commands.
	wait(1, seconds);
	// The Robot will turn right at half power for 70 encoder counts (degrees).
	turnRight(70, degrees, 50);
	// The robot will wait for 1 seconds before executing commands.
	wait(1, seconds);
	// The robot will close the grippers (manipulatorMotor) at power level 40.  After 1 second the grippers will stop closing.
	setMotor(mammalAttachment, 40);
	wait(1, seconds);
	stopMotor(mammalAttachment);
	// The robot will wait for 1 seconds before executing commands.
	wait(1, seconds);
	// The Robot will turn right at half power for 60 encoder counts (degrees).
	turnRight(60, degrees, 50);
	backward(1,rotations,50);
	turnRight(60,degrees,50);
	forward(5,rotations,50);
	setMotor(mammalAttachment, -40);
	wait(1, seconds);
	stopMotor(mammalAttachment);
	// Enter your code for the robot to drive forward to the INerplanetary Boost Pad here:
	// Enter the code for the robot to drive forward to the Fuel Station here:
	// Enter the code for the robot to drop off the fuel Barrel here:
	// Note: NEGATIVE motor power levels will OPEN the Gripper and release the Fuel Barrel!
	// The Program Ends
}

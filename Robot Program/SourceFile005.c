
task main()
{
	forward(1.6, rotations, 50);
	moveMotor(motorA);
	backward(1.6, rotations, 50);
	moveMotor(motorB);
	forward(3, rotations, 50);
	moveMotor(motorC);
	backward(3, rotations, 50);
	forward(6,rotations,50);
moveMotor(motorD);
	backward(6,rotations,50);


}

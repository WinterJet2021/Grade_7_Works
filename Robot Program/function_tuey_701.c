#pragma config(StandardModel, "EV3_REMBOT")
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//
int encoderLine1;

//*This time the program will use a function to store data in the pipeline challemge*//
void forward_one_line()
{

//*This is how i create a function and so it canbe more efficient.*//
setMotorSpeed(leftMotor, 30);
setMotorSpeed(rightMotor, 30);

waitUntil(getColorName(colorSensor) == colorBlack);

setMotorSpeed(leftMotor, 30);
setMotorSpeed(rightMotor, 30;
}
//*The rest of the code remains the same.*//
task main()
{
	repeat(2)
{
		resetMotorEncoder(leftMotor);
		forward_one_line();
		encoderLine1 = getMotorEncoder(leftMotor);
}
}

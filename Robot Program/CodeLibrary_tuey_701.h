
void forward_one_line()

//*This time the program will use a function to store data in the pipeline challemge*//

{
//*This is how i create a function and so it canbe more efficient.*//
setMotorSpeed(leftMotor, 30);
setMotorSpeed(rightMotor, 30);

waitUntil(getColorName(colorSensor) == colorBlack);

setMotorSpeed(leftMotor, 30);
setMotorSpeed(rightMotor, 30);
}
//*This is the finish function*//

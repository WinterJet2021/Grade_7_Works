#pragma config(StandardModel, "EV3_REMBOT")
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

void green()
{
setMultipleMotors(50,motorB,motorC);
waitUntil(getColorName(colorSensor) ==colorGreen);
turnLeft(360,degrees,50);
}
void blue()
{
setMotorSpeed(motorB, -50);
setMotorSpeed(motorC, -50);
waitUntil(getColorName(colorSensor) ==colorBlue);
setMotorSpeed(motorB, 0);
setMotorSpeed(motorC, 0);
}
void blue2()
{
	turnLeft(279, degrees, 20);
	turnLeft(90,degrees,50);
	setMotorSpeed(motorB, -50);
  setMotorSpeed(motorC, -50);
  waitUntil(getColorName(colorSensor) ==colorRed);
  setMotorSpeed(motorB, 0);
  setMotorSpeed(motorC, 0);
}
task main()
{
	repeat(3)
{
	green();
	blue();
	blue2();
	stopAllMotors();
}
	}

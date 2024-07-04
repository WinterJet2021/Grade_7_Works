#pragma config(StandardModel, "EV3_REMBOT")
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
/*This time the ROBOTC uses the sonar sensor to detect the objects within its range*/
setMotorSpeed(motorC, 50);
setMotorSpeed(motorB, 50);
waitUntil(getUSDistance(sonarSensor)< 15);
setMotorSpeed(motorC, 0);
setMotorSpeed(motorB, 0);
turnLeft(182, degrees);
setMotorSpeed(motorC, 50);
setMotorSpeed(motorB, 50);
/*When the ROBOTC dectects something that is 15 centimeters away it will stop*/
waitUntil(getUSDistance(sonarSensor)< 15);
turnRight(187, degrees);
setMotorSpeed(motorC, 50);
setMotorSpeed(motorB, 50);
waitUntil(getUSDistance(sonarSensor)< 18);
turnRight(185.5, degrees);
setMotorSpeed(motorC, 50);
setMotorSpeed(motorB, 50);
waitUntil(getUSDistance(sonarSensor)< 19);
/*Once again it has reach its goal!*/
}

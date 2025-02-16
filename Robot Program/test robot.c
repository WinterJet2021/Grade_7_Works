#pragma config(StandardModel, "EV3_REMBOT")
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	//Repeat Until the Sonar Sensor detects an object
	repeatUntil(getUSDistance(sonarSensor) < 250)
	{
		//Forward and wait
		forward(8, rotations, 50);
    wait(2, seconds);
    //Turn and wait
    turnRight(0.5, rotations, 50);
    wait(2, seconds);
	}
}

#pragma config(StandardModel, "RVW Mammalbot")
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
backward(2,rotations,50);
turnRight(170,degrees,50);
forward(8,rotations,50);
turnRight(175,degrees,50);
forward(3.5,rotations,50);
setMotor(mammalAttachment, -50);
wait(1, seconds);
stopMotor(mammalAttachment);
//*I have collected the crystal but it won't show on the chart thing*//
}

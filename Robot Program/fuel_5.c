#pragma config(StandardModel, "RVW Mammalbot")
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
turnLeft(1,rotations,50);
forward(2.5,rotations,50);
turnRight(190,degrees,50);
forward(3.5,rotations,50);
turnLeft(190,degrees,50);
forward(3,rotations,50);
setMotor(mammalAttachment, 40);
wait(1, seconds);
stopMotor(mammalAttachment);
backward(3,rotations,50);
turnRight(190,degrees,50);
forward(12,rotations,50);
setMotor(mammalAttachment, -40);
wait(1, seconds);
stopMotor(mammalAttachment);

}

#pragma config(StandardModel, "RVW Mammalbot")
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
forward(28,rotations,100);
backward(3,rotations,50);
turnRight(50,degrees,50);
forward(5,rotations,50);
turnRight(150,degrees,50);
forward(8,rotations,50);
turnLeft(100,degrees,50);
forward(3,rotations,50);
//*Here we reach the last checkpoint*//
}

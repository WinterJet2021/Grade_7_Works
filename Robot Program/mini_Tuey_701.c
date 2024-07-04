#pragma config(StandardModel, "EV3_REMBOT")
//* I will make the robot go to the goal*//
task main()
{
//* This is used for rotating left*//
forward( 2.2, rotations, 50);
turnLeft( -111, degrees, 10);
forward( 5.8,rotations, 40);
turnLeft( -259, degrees, 10);
forward( 5.8,rotations, 40);
turnLeft( -185, degrees, 10);
forward( 2.4, rotations, 40);
}
//* This is the degree and rotations for robotc*/

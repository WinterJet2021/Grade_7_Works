#pragma config(StandardModel, "EV3_REMBOT")
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

bool lineMarker[5];

int barcodeNumbers;

char letter[27] =
	{'_', 'a','b','c','d',
		'e','f','g','h','i',
		'j','k','l','m','n',
		'o','p','q','r','s',
		't','u','v','w','x',
		'y','z'};

int binaryConvert()
{
	int binarySum = 0;

	binarySum = (lineMarker[0] * 1);
	binarySum = binarySum + (lineMarker[1] * 2);
	binarySum = binarySum + (lineMarker[2] * 4);
	binarySum = binarySum + (lineMarker[3] * 8);
	binarySum = binarySum + (lineMarker[4] * 16);

	return binarySum;
}

void detectLines()
{
	for(int i=0; i<5; i++)
	{
 		forward(123,degrees,25);

 		if(getColorReflected(colorSensor) < 30)
		{
			lineMarker = true;
		}
		else
		{
		lineMarker = false;
		}
		 	sleep(500);
	}

	barcodeNumbers = binaryConvert();
}

task main()
{

detectLines();

}

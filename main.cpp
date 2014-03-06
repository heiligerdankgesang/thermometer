
#include <iostream>

using namespace std;

#include "Thermometer.h"

int main()
{
	Thermometer tempObject;
	char userTempScale = 'C';
	double userTempValue = 0.0;

	cout << "Here is the default scale for the temperature object: "
		<< tempObject.GetScale() << endl 
		<< "Here is the default temperature for the temperature object: "
		<< tempObject.GetTemp() << endl << endl;
	
	cout << "To which scale would you like to set your temperature (C or F)? ";
	userTempScale = cin.get();
	
	tempObject.SetScale(userTempScale);

	cout << "To what temperature would you like to set the thermometer? ";
	cin >> userTempValue;
	cout << endl;

	tempObject.SetTemp(userTempValue);

	cout << "You entered: " << tempObject.GetScale() 
		<< " and " << tempObject.GetTemp() << "." << endl << endl;
	
	cout << "Here is the converted temperature in the opposite scale: " 
		<< tempObject.GetConvTemp()
		<< endl << endl;
	
	Thermometer tempObject2(tempObject); //calls the copy constructor

	cout << "Please change the temperature of the copy we just made: ";
	cin >> userTempValue;
	
	tempObject2.SetTemp(userTempValue);
	
	cout << "The temperature of the original object is: "
		<< tempObject.GetTemp() << " " << tempObject.GetScale()
		<< "." << endl << endl;
	
	cout << "The temperature of the copied object is now: "
		<< tempObject2.GetTemp() << " " << tempObject2.GetScale()
		<< "." << endl;

	system ("PAUSE");
	
	return 0;
}

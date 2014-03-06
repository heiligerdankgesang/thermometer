// Thermometer class implementation

#include "Thermometer.h"
#include <iostream>

using namespace std;

Thermometer::Thermometer()
{
	//default sets to C and 0
	tempScale = 'C';
	temperature = 0.0;
}

Thermometer::Thermometer(char inputScale, double inputTemp)
{
	//set scale and temp to user provided values
	temperature = inputTemp;
	tempScale = inputScale;
}

Thermometer::Thermometer(const Thermometer& copyThermometer)
{
	//copy constructor
	temperature = copyThermometer.temperature;
    tempScale = copyThermometer.tempScale;
}

void Thermometer::SetScale(char setScale) {tempScale = setScale;}

const char Thermometer::GetScale() {return tempScale;}

void Thermometer::SetTemp(double setTemp) {temperature = setTemp;}

const double Thermometer::GetTemp() 
{
	return temperature;
}

const double Thermometer::GetConvTemp() 
{
	if(tempScale == 'C')
	{
		return ((temperature)*9/5)+32;
	}
	else 
	{
		return (temperature-32)*5/9;
	}
}

void Thermometer::ResetTemp()
{
	if (tempScale = 'C')
	{
		temperature = 0.0;
	}
	else if (tempScale = 'F')
	{
		temperature = 32.0;
	}
}

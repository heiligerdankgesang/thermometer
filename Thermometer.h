/*========================================================================
SPECIFICATION FILE (Thermometer.h)
This file contains the specifications for the Thermometer class
==========================================================================*/
#pragma once

class Thermometer
{
private:
	double temperature;
	char tempScale;

public:
	Thermometer();
	// Default constructor

	Thermometer(char inputScale, double inputTemp);
	// Parameterized constructor

	Thermometer(const Thermometer& copyThermometer);
	//copy constructor to make a copy of Thermometer

	void SetScale(char setScale);
	//set scale to either C or F - variable: tempScale

	const char GetScale();
	//return the current scale	

	void SetTemp(double setTemp);
	// Set the temperature

	const double GetTemp();
	// Gets current temperature value

	const double GetConvTemp();
	// Does temperature conversion
	
	void ResetTemp();
	// Reset temperature to zero if in C, 32 if in F
};

/* This program prints a table showing the meter voltage corresponding
to water temperatures varying from 0-100 degrees celsius in increments
of 10 degrees.*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//Defining the variables for voltage and temperature.
	double voltage;

	// Creating a table for the values
	cout << "\t\t_________________________________________________\n";
	cout << "\t\t|                       |                       |\n";   
	cout << "\t\t|      Temperature      |        Voltage        |\n";
	cout << "\t\t|_______________________|_______________________|\n";
	cout << "\t\t|                       |                       |\n";
	
	// Using a for loop to produce the voltages corresponding to 
	// temperatures between 0-100 degrees in increments of 10.
	for (double temperature = 0.0; temperature <= 100; temperature += 10)
	{
		//Defining the formula for finding the voltage
		voltage = ( 2000.0 + 20.0 * temperature ) / ( 250.0 + temperature );

		//Displaying the values in the chart
		cout << fixed << setprecision(2) << "\t\t|" << setw(14) << temperature << setw(10) << "|" << setw(14) << voltage << setw(11) << "|\n";
		cout << "\t\t|" << setw(24) << "|" << setw(25) << "|\n";
	}

	cout << "\t\t|_______________________|_______________________|\n";
	cout << "\n\n\n\n\n";

	// Terminate the program
	system("pause");
	return 0;
}
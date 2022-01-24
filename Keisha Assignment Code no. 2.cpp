#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
	string temperature;
	float Kelvin = 0;
	cout << "Enter temperature in Kelvin: ";
	getline(cin, temperature);
	stringstream(temperature) >> Kelvin;
	cout << "The temperature in Fahrenheit is: " << (((Kelvin - 273.15)*9)/5) + 32 << endl;
	return 0;
}
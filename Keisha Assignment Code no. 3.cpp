#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
	string dimensions;
	float height = 0;
	float radius = 0;
	float pi = 3.142;
	cout << "Enter height of cylinder: ";
	
	getline(cin, dimensions);
	stringstream(dimensions) >> height;
	cout << "Enter radius of cylinder: ";
	getline(cin, dimensions);
	stringstream(dimensions) >> radius;
	cout << "Volume of cylinder: " << pi * height * radius * radius << endl;
	return 0;
}
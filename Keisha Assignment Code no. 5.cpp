#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
	string dimensions;
	float radius = 0;
	float pi = 3.142;
	cout << "Enter radius of sphere: ";
	getline(cin, dimensions);
	stringstream(dimensions) >> radius;
	cout << "Volume of sphere: " << 4/3 * pi * radius * radius << endl;
	return 0;
}
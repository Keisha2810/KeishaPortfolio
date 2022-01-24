#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
	string dimensions;
	float length = 0;
	cout << "Enter length of cube: ";
	
	getline(cin, dimensions);
	stringstream(dimensions) >> length;
	cout << "Volume of cube: " << length * length * length << endl;
	return 0;
}
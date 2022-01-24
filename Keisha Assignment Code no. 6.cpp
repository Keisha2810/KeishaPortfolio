#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
	string time;
	float number = 0;
	cout << "Enter number in minutes: ";
	
	getline(cin, time);
	stringstream(time) >> number;
	int b = number/60;
	int c = (number-60);
	
	if (b > 24){cout << "The number entered is invalid. No time available for display." << endl ;}
	else{
	cout << "The hour(s) is: " << b << endl;
	cout << "The minute(s) is: " << c << endl;
	
	cout << "The time is: " << b << ":" << c << endl;}
	
return 0;
}


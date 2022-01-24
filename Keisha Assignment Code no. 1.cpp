#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	string simultaneous;
	float equation1 = 0;
	cout << "The format of equation 1 is ax + by = c. Enter equation 1: ";
	getline(cin, simultaneous);
	stringstream(simultaneous) >> equation1;
	float equation2 = 0;
	cout << "The format of equation 2 is ax + by = Enter equation 2: ";
	getline(cin, simultaneous);
	stringstream(simultaneous) >> equation2;
	float equation1x = 0;
	float equation1y = 0;
	float equation1output = 0;
	float equation2x = 0;
	float equation2y = 0;
	float equation2output = 0;
	float a = 0;
	float x = 0;
	float y = 0;

	cout << "Enter coefficient of x in equation 1: ";
	getline(cin, simultaneous);
	stringstream(simultaneous) >> equation1x;
	cout << "Enter coefficient of y in equation 1: ";
	getline(cin, simultaneous);
	stringstream(simultaneous) >> equation1y;
	cout << "Enter output in equation 1: ";
	getline(cin, simultaneous);
	stringstream(simultaneous) >> equation1output;
	cout << "Enter coefficient of x in equation 2: ";
	getline(cin, simultaneous);
	stringstream(simultaneous) >> equation2x;
	cout << "Enter coefficient of y in equation 2: ";
	getline(cin, simultaneous);
	stringstream(simultaneous) >> equation2y;
	cout << "Enter output in equation 2: ";
	getline(cin, simultaneous);
	stringstream(simultaneous) >> equation2output;
	
	if(equation1x==equation2x && equation1y==equation2y){ cout <<"There are infinite possible solutions for the simultaneous." << endl;
	}
	else if(equation1x==equation2x) { cout <<"The simultaneous entered is incorrect." << endl; }
	
	else {
	
	a = (equation1x * equation2y) - (equation1y * equation2x);
	x = ((equation1output * equation2y) - (equation1y * equation2output))/a;
	y = ((equation1x * equation2output) - (equation1output * equation2x))/a;
	cout << "The value of x is: " << x <<"  "<<"The value of y is: " << y << endl;
	return 0;
	}
}
#include <iostream>
using namespace std;
int main() {
	int c;
	int d;
	int lower;
	int upper;
loop :
cout<<"Input lower limit ";
cin>>lower;
cout<<"Input upper limit ";
cin>>upper;
if (lower>upper){cout << "The inputs are invalid. Lower limit cannot be greater than upper limit." << endl;
goto loop;
}
else{
for(d = lower;d<=upper;++d)
{
	if (d%2 == 1) {cout<<d<<"    ";

	c= d+c;
	};
 }
cout<<"\n";
cout << "The sum of all odd numbers between "<<lower<<" and "<<upper<<" is: "<<c <<"." ;
 return 0;
}
}
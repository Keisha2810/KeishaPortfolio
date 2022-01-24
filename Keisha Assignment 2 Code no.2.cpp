#include <iostream>
using namespace std;
int main() {
	int a = 0;
	int b = 1;
	int c;
	int d;
	int terms;
cout<<"Enter number of terms in Fibonacci sequence needed: ";
cin>>terms;
if (terms==1){cout<<0;
}
else if (terms==0){cout<<"There is no term to be displayed.";
}
else{
cout<<a<<" "<<b<<" ";
for(d = 2;d<terms;++d)
{
	c = a+b;
	cout<<c<<" ";
	a=b;
	b=c;
 }
}
 return 0; 
}
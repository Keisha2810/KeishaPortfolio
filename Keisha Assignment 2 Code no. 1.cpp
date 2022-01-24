#include <iostream>
using namespace std;

int main()
{
    int n;
    int l = 12;
    int k;
    int m;
    cout<<"Enter value of n: ";
    cin>>n;

    for (m = 1; m <= l; m++)
    {
        for (k = 1; k <= n; k++)
        {
            cout << m << " x " << k << " = " << k*m <<" "<<"\t" ;
        }
        cout<<"\n";
    }
    return 0;
}

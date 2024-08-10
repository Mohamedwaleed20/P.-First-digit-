#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int a ;
    cin >> a  ;
    if (a<999 && a > 9999)
    {
        cout << "err" ;
    }
    int first = a / 1000 ;
    if (first%2==0)
    {
        cout << "EVEN";
    }
    else
    {
        cout << "ODD" ;
    }
    return 0;
}

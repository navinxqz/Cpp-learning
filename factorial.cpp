#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a,sum=1;
    cout<<"Input a number to calculate factorial: ";
    cin>>a;
    for(int i=1;i<=a;i++){
        sum *=i;
    }
        cout<<"Factorial of the number is:  "<<sum;
        return 0;
}


#include<iostream>
#include <math.h>
using namespace std;
int main ()
{
    int a,b,c;
    cout<<"Enter the values:";
    cin>>a>>b>>c;
    int d= (b*b)-4*a*c;
    int e=sqrt(d);
    if (e>=0)
    {
        cout<<"solutions are:"<<(-b+e)/2*a;
        cout<<endl;
        cout<<"solutions are:"<<(-b-e)/2*a;
    }
    else{
            cout<<"it has no real root";}
    return 0;
}

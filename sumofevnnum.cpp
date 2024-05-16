#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
    int a,b,sum=0;
    cout<<"First Number: "<<endl;
    cin>>a;
    cout<<"Second Number: "<<endl;
    cin>>b;
    for(int i=a; i<b; i++){
        if(i%2 == 0){
            sum +=i;
        }
    }
    cout<<"Sum of even numbers between these two input numbers is:  "<<sum<<endl;
    return 0;
}

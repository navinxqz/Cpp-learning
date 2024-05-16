#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Input 2 Numbers: "<<endl;
    cin>>a>>b;

    if (a%2==0){
        cout<<a<<" is even number."<<endl;
    }else
    cout<<a<<" is odd number."<<endl;
    if (b%2==0){
        cout<<b<<" is even number."<<endl;
    }else
    cout<<b<<" is odd number."<<endl;
    if (a>b){
        cout<<a<<" is max."<<endl;
    }else
    cout<<b<<" is max."<<endl;
    return 0;
}

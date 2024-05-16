#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int b,s;
    cout<<"buying price: ";
    cin>>b;
    cout<<"selling price: ";
    cin>>s;
    if(s>b){
        cout<<"User made a "<<s-b<<" taka PROFIT!!!"<<endl;
    }
    else if (s<b){
        cout<<"User incurred a "<<b-s<<" taka loss."<<endl;
    }
    else if(s=b){
        cout<<"Lav-loss kisui nai amar jibon tai loss :("<<endl;
    }
    return 0;
}

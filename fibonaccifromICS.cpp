#include<iostream>
using namespace std;
int main()
{
    int n,t1=0,t2=1,nextTerm=0;
    cout<<"Enter the numer of terms: ";
    cin>>n;
    cout<<"Fibonacci series: ";
    for (int i = 1;i<=n; ++i){
        if(i==1){
            cout<<t1<<",";
            continue;
        }
        if(i==2){
            cout<<t2<<",";
            continue;
        }
    }
    return 0;
}

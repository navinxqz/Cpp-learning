#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"Total students: ";
    cin>>n;
    double st[n],sum=0;
    for(int i=0; i<n; i++){
        cout<<"Enter marks for student "<<i+1<<" : ";
        cin>>st[i];
        sum += st[i];
    }
    double avg=sum/n;
    cout<<"Sum: "<<sum<<endl;
    cout<<"Avg: "<<avg<<endl;
    return 0;
}

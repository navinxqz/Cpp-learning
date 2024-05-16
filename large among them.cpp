#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, num[n];
    cout<<"Enter total term: ";
    cin>>n;
    for(int i=0; i<n; i++){
        cout<<"Give input for integer "<<i+1<<" : ";
        cin>>num[i];
    }
    int max=num[0], secmax=num[0];
    for(int i=1; i<n; i++){
        if(num[i]>max){
            secmax=max;
            max=num[i];
        }
        else if(num[i]>secmax && num[i] != max){
            secmax= num[i];
        }
    }
    cout<<"Max number: "<<max<<endl;
    cout<<"Second Max number: "<<secmax<<endl;
    return 0;
}

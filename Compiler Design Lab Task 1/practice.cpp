#include <iostream>
using namespace std;

int main()
{
    double avg = 0;
    double arr[] = {10,20,15,16,25,13};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<n; i++){
        avg += arr[i];
    }
    avg = avg/n;
    cout<<"Avarage: "<<avg<<endl;
    return 0;
}

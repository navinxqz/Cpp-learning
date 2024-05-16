#include <iostream>
using namespace std;
int main ()
{
    float total=0;
    float month[6];//{100,60,0,150,130,40};
    for (int i=0;i<6;i++){
        cout<<"Enter amount for month "<<i+1<<": ";
        cin>>month[i];
        total += month[i];
    }
    float avg= total/6;
    cout<<"total: "<<total<<endl;
    cout<<"Average: "<<avg<<endl;

    return 0;
}



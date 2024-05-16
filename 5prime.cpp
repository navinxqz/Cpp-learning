#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int num[5];
    cout<<"Enter five positive integer numbers to check whether each number is a prime number or not a prime number."<<endl;
    for (int i=0; i<5; i++){
        cout<<"Positive integer "<<i+1<<" : ";
        cin>>num[i];
    }
    for(int i=0; i<5; i++){
        int counter=0;
        for(int j=2; j<num[i]; j++){
            if(num[i]%j==0){
                counter++;
        }
        }if(counter==0){
            cout<<num[i]<<" is a prime number."<<endl;
        }else{
        cout<<num[i]<<" is not a prime number."<<endl;}
    }
    return 0;
}

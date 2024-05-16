#include <iostream>
using namespace std;

int main(){
    int myAge = 10;
    int *myAge_address = &myAge;

    cout<<"Value of myAge: "<<myAge<<endl;
    cout<<"Value of *myAge_address: "<<*myAge_address<<endl;
    cout<<"Value of myAge_address: "<<myAge_address<<endl;
    cout<<"Value of &myAge: "<<&myAge<<endl;

    *myAge_address = 1099;
    cout<<endl;
    cout<<"Value of new myAge: "<<myAge<<endl;
    cout<<"Value of new *myAge_address: "<<*myAge_address<<endl;
    cout<<"Value of new myAge_address: "<<myAge_address<<endl;
    cout<<"Value of new &myAge: "<<&myAge<<endl;

    return 0;
}
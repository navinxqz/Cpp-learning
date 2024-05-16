#include <iostream>
using namespace std;
int main ()
{
    int size;
    cout<<"Input size: ";
    cin>>size;

    for(int i=0; i<size; i++){
        for(int j=1; j<size-i; j++){
            cout<<" ";
        }
        for(int k=0; k<=i; k++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

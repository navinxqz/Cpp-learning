#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char a[100], b[100];
    cout<<"1st string: ";
    cin>>a;
    cout<<"2nd string: ";
    cin>>b;

    if(strcmp(a,b)==0){
        cout<<"same";
    }else{
    cout<<"not same";}
    return 0;
}

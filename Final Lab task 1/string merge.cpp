#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char st1[100],st2[100];
    cout<<"(don't use any space)\nGive Input for 1st string: ";
    cin>>st1;
    cout<<"Give Input for 2nd string: ";
    cin>>st2;

    strcat(st1,st2);
    cout<<"Merged output: "<<st1;
    return 0;

}

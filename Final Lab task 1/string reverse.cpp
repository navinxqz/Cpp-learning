#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string a,reverseA;
    cout<<"\n\tInput string: ";
    getline(cin,a);

    for( int i=a.length()-1; i>=0; i--){
        reverseA += a[i];
    }
    cout<<"\tReversed string: "<<reverseA<<"\n\n";
    return 0;
}

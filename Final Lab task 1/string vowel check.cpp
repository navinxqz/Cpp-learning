#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char a[100];
    cout<<"Input string(don't use any space): ";
    cin>>a;

    int counter=0;
    for(int i=0; i<strlen(a);i++){
            if(a[i]== 'a'||a[i]== 'e'||a[i]== 'i'||a[i]== 'o'||a[i]== 'u'||a[i]== 'A'||a[i]== 'E'||a[i]== 'I'||a[i]== 'O'||a[i]== 'U')
            counter++;
        }
        cout<<"vowels appeared "<<counter<<" times."<<endl;
        return 0;
    }

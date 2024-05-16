#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter how many terms: ";
    cin>>n;
    char ch[n];

    for(int i=0; i<n; i++){
        cout<<"Input charecter "<<i+1<<" : ";
        cin>>ch[i];
    }   cout<<endl<<"Vowels are: ";

    for(int i=0; i<n; i++){
        switch (ch[i]){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':

        cout<<ch[i]<<" ";
        break;
        }
    }   return 0;
}

#include <iostream>
using namespace std;
int main()
{
    string a,b;
    cout<<"Hlo, Enter your first name: ";
    cin>>a;

    cout<<"Enter your last name: ";
    cin>>b;

    string fullName = a.append(b);
    cout<<"\nWelcome "<<fullName;
}

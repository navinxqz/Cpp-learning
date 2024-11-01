#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    cout<<"Input line: ";
    getline(cin,s);

    if(s.substr(0,2) == "//")
        {
            cout<<"This is a single line comment!\n";
        }else if(s.substr(0,2) == "/*" && s.size() > 4 && s.substr(s.size()-2 , 2) == "*/")
        {
            cout<<"This is a multi line comment!\n";
        }else
        {
            cout<<"This is not a comment\n";
        }return 0;
}

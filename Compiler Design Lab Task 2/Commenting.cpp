#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    cout<<"Input line: ";
    getline(cin,s);

    if(s.substr(0,2) == "//")   //at least 2 characters
        {
            cout<<"This is a single line comment!\n";
        }else if(s.length() >= 4){  //at least 4 characters
            if(s[0]== '/' && s[1] == '*' && s[s.length()-2] == '*' && s[s.length()-1] == '/')
            {
                cout<<"This is a multiline comment!\n";
            }else{
                cout<<"This is not a comment\n";
            }
        }else
        {
            cout<<"This is not a comment\n";
        }return 0;
}

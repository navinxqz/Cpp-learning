#include <iostream>
#include <string>
using namespace std;

class Student{
public:
string name;
int id;
};

int main()
{
    Student c;
    c.name = "John";
    c.id = 2222;
    cout<< "Name: "<<c.name<<endl;
    cout<< "ID: "<<c.id<<endl;
    return 0;
}

#include <iostream>
#include <string>
using namespace std;

class Employee{
private:
 string name;
 int joining;
 int salary;
 string address;
public:
    Employee(string n, int j, int s, string a){
    name=n;
    joining=j;
    salary=s;
    address=a; }

 void info(){
 cout<<name<< "\t"<<joining<< "\t\t\t"<<salary<< "\t"<<address<<endl;
 }};
 int main()
 {
     Employee robert("Robert",1994,10000,"64C-WallsStreat");
     Employee sam("Sam",2000,20000,"68D-WallsStreat");
     Employee john("John",1999,25000,"26B-WallsStreat");

     cout<<"Name\tYear of Joining\t\tSalary\tAddress\n\n";
     robert.info();
     sam.info();
     john.info();
     return 0;
 }

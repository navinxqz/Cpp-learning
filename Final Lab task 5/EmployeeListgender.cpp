#include <iostream>
#include <string>
using namespace std;

struct employee {
int id;
string name;
string designation;
char gender;
double salary;
string joindate;};

int main ()
{
    employee data[10];
    for ( int i=0; i<10; i++){
        cout<< "Information for Emplyee "<<i+1<<endl;
        cout<< " ID: ";
        cin>> data[i].id;
        cout<< "Name: ";
        cin.ignore();
        getline (cin,data[i].name);
        cout<< "Designation: ";
        getline(cin,data[i].designation);
        cout<< "Gender (m/f): ";
        cin>> data[i].gender;
        cout<< "Salary: ";
        cin>>data[i].salary;
        cout<< "Joining Date (date/month/year): ";
        cin>>data[i].joindate;
    }

    cout<< "The details of all Male Employees:\n";
    for( int i=0; i<10; i++){
        if (data[i].gender == 'm'){
            cout<<i+1<<". "<<data[i].id<<" , "<<data[i].name<<" , "<<data[i].designation<<" , "<<data[i].gender<<" , "<<data[i].salary<<" , "<<data[i].joindate<<" .\n";
        }}
        cout<< "The details of all Female Employees:\n";
    for( int i=0; i<10; i++){
        if (data[i].gender == 'f'){
            cout<<i+1<<". "<<data[i].id<<" , "<<data[i].name<<" , "<<data[i].designation<<" , "<<data[i].gender<<" , "<<data[i].salary<<" , "<<data[i].joindate<<" .\n";
        }}
        cout<< "List of Employees whos salary is more than 20000:\n";
        for(int i=0;i<10; i++){
            if (data[i].salary>20000){
                cout<<i+1<<". "<<data[i].id<<" , "<<data[i].name<<" , "<<data[i].designation<<" , "<<data[i].gender<<" , "<<data[i].salary<<" , "<<data[i].joindate<<" .\n";
            }}
            return 0;
}

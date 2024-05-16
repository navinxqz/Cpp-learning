#include <iostream>
using namespace std;

struct student{
int uid;
int credits;
float cgpa;};

int main ()
{
    student person[10];
    for (int i=0; i<10;i++){
        cout<< "Enter information for student "<<i+1<<" _\n";
        cout<<" ID: ";
        cin>>person[i].uid;
        cout<< " Credits Completed: ";
        cin>>person[i].credits;
        cout<< " CGPA: ";
        cin>>person[i].cgpa;
        cout<<endl;}
        cout<< "Student's ID whose CGPA is more than 3.75:\n";
        for (int i=0; i<10; i++){
            if (person[i].cgpa>3.75){
                cout<< person[i].uid<<endl;
            }}
            cout<< "Student's ID who has completed more than 50 credits:\n";
            for (int i=0; i<10; i++){
            if (person[i].credits>50){
                cout<< person[i].uid<<endl;
            }}
return 0;
}

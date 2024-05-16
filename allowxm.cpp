#include <iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,b,result;
    cout<<"Number of classes held: ";
    cin>>a;
    cout<<"Number of classes were attended: ";
    cin>>b;
    result=(b*100/a);
    cout<<"Attendence is "<<result<<"%"<<endl;
    if(result>=80){
        cout<<"Student allowed to sit in the exam."<<endl;
    }
    else{
        cout<<"Student not allowed to sit in the exam."<<endl;
    }
    getch();
}

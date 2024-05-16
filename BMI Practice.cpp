#include<iostream>
using namespace std;
int main()
{
    double m,h,bmi;
    cout<<"To calculate your BMI input the below data_"<<endl<<"User's weight (kilogram): ";
    cin>>m;
    cout<<"User's height (meter): ";
    cin>>h;
    bmi= m/(h*h);
    cout<<"User's BMI = "<<bmi<<endl;

    return 0;
}

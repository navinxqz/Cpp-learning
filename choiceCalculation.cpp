#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int choice;
    cout<<"Choose an option from bellow:"<<endl;
    cout<<"1) Area of circle"<<endl<<"2) Area of rectangle"<<endl<<"3) Area of triangle"<<endl<<"4) Area of square"<<endl;
    cin>>choice;
    double radius,length,breadth,area,base,height;

switch(choice){
case 1:
    cout<<"We are here to calculate the area of circle. Input the requirement bellow:"<<endl;
    cout<<"Radius: ";
    cin>>radius;
    area= 3.1416*(radius*radius);
    cout<<"Area of the circle: "<<area<<endl;
    break;
case 2:
    cout<<"We are here to calculate the area of rectangle. Input the requirement bellow:"<<endl;
    cout<<"Length and breadth:"<<endl;
    cin>>length>>breadth;
    area= length*breadth;
    cout<<"Area of the rectangle: " << area << endl;
    break;
case 3:
    cout<<"We are here to calculate the area of triangle. Input the requirement bellow:"<<endl;
    cout<<"Base and height:"<<endl;
    cin>>base>>height;
    area= 0.5*base*height;
    cout<<"Area of triangle: "<<area<<endl;
    break;
case 4:
    cout<<"We are here to calculate the area of square. Input the requirement bellow:"<<endl;
    cout<<"Length: ";
    cin>>length;
    area= length*length;
    cout<<"Area of square: "<<area<<endl;
    break;
default:
    cout<<"Invalid Input!!!"<<endl;
    break;
    }
    return 0;
}

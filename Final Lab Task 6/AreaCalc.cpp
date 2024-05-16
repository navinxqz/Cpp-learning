#include <iostream>
using namespace std;
class Rectangle{
private:
    double length;
    double breadth;
public:
    void setLength(double l){
    length=l; }
    void setBreadth(double b){
    breadth=b; }

    double getLength(){
    return length; }
    double getBreadth(){
    return breadth; }

    double returnArea(){
    return length*breadth; }
};
int main()
{
    Rectangle c;
    double l,b;
    cout<< "Enter Length: ";
    cin>>l;
    c.setLength(l);
    cout<< "Enter Breadth: ";
    cin>>b;
    c.setBreadth(b);
    cout<< "Area of the rectangle: "<<c.returnArea()<<endl;
    return 0;
}

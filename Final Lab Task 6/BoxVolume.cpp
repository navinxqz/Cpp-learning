#include <iostream>
using namespace std;

class Box{
private:
    double length;
    double breadth;
    double height;
public:
    void setLength(double l){
    length=l; }
    void setBreadth(double b){
    breadth=b; }
    void setHeight(double h){
    height=h; }

    double getLength(){
    return length; }
    double getBreadth(){
    return breadth; }
    double getHeight(){
    return height; }

    double Volume(){
    return length*breadth*height;
    }};
int main()
    {
       Box v;
       double l,b,h;
       cout<< "Enter Length: ";
       cin>>l;
       v.setLength(l);
       cout<< "Enter Breadth: ";
       cin>>b;
       v.setBreadth(b);
       cout<< "Enter Height: ";
       cin>>h;
       v.setHeight(h);

       cout<< "Volume of the Box: "<<v.Volume()<<endl;
       return 0;
    }

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    double p,q,p1=200.75,p2=345.50,p3=775.75,p4=400.35,p5=1200.75 ;
    cout<<"Pricetags of the products are given bellow:"<<endl<<endl;
    cout<<"          product 1 : BDT 200.75"<<endl;
    cout<<"          product 2 : BDT 345.50"<<endl;
    cout<<"          product 3 : BDT 775.75"<<endl;
    cout<<"          product 4 : BDT 400.35"<<endl;
    cout<<"          product 5 : BDT 1200.75"<<endl<<endl;
    cout<<"product number: ";
    cin>>p;
    cout<<"quantity sold: ";
    cin>>q;
    if(p==1){
    cout<<"Total retail price: "<<p1*q<<" BDT"<<endl;
    }
    else if(p==2){
    cout<<"Total retail price: "<<p2*q<<" BDT"<<endl;
    }
    else if(p==3){
    cout<<"Total retail price: "<<p3*q<<" BDT"<<endl;
    }
    else if(p==4){
    cout<<"Total retail price: "<<p4*q<<" BDT"<<endl;
    }
    else if(p==5){
    cout<<"Total retail price: "<<p5*q<<" BDT"<<endl;
    }
    else
    cout<<"Invalid Data Given!!!"<<endl;
}

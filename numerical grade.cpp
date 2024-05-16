#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int mark;
    cout<<"Input Marks: ";
    cin>>mark;

    if(mark>100 || mark<0){
        cout<<"Invalid data!!!"<<endl;
    }
    else{
            if(mark>=90){
        cout<<"Your Grade is: A+"<<endl;
        cout<<"Your Grade Point is: 4.00"<<endl;
    }else if(mark>=85){
        cout<<"Your Grade is: A"<<endl;
        cout<<"Your Grade Point is: 3.75"<<endl;
    }else if(mark>=80){
       cout<<"Your Grade is: B+"<<endl;
       cout<<"Your Grade Point is: 3.50"<<endl;
    }else if (mark>=75){
       cout<<"Your Grade is: B"<<endl;
       cout<<"Your Grade Point is: 3.25"<<endl;
    }else if (mark>=70){
        cout<<"Your Grade is: C+"<<endl;
        cout<<"Your Grade Point is: 3.00"<<endl;
    }else if (mark>=65){
        cout<<"Your Grade is: C"<<endl;
        cout<<"Your Grade Point is: 2.75"<<endl;
    }else if (mark>=60){
        cout<<"Your Grade is: D+"<<endl;
        cout<<"Your Grade Point is: 2.50"<<endl;
    }else if (mark>=50){
        cout<<"Your Grade is: D"<<endl;
        cout<<"Your Grade Point is: 2.25"<<endl;
    }else if (mark<50){
        cout<<"Your Grade is: F"<<endl;
        cout<<"Your Grade Point is: 0.00"<<endl;
    }else{
        cout<<" Invalid Data! "<<endl;
    }
    }
    return 0;
}

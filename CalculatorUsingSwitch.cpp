#include<iostream>
#include<math.h>
using namespace std;
int main(){
    float value1,value2;
    char op;
    cout<<"ki hisab korben:  ";
    cin>>value1>>op>>value2;
    switch(op){
        
case '+':
    cout<<"jogfol: "<<value1+value2<<endl;
    break;
case '-':
    cout<<"biyogfol: "<<value1-value2<<endl;
    break;
case '*':
    cout<<"goonfol: "<<value1*value2<<endl;
    break;
case '/':
    cout<<"vhagfol: "<<value1/value2<<endl;
    break;
case '%':
    cout<<"vhagshesh: "<<(int)value1%(int)value2<<endl;
    break;
case '^':
    cout<<"power er maan: "<<pow(value1,value2)<<endl;
    break;
default:
    cout<<"unknown zinish";
}
return 0;
}

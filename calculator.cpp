#include<iostream>
#include<math.h>
using namespace std;
int main(){
float value1, value2;
char op;
cout<<"type wht u want to calculate:";
cin>>value1>>op>>value2;
if (op=='+'){
    cout<<"Addition:"<<value1+value2<<endl;
}
else if (op=='-'){
    cout<<"Substraction:"<<value1-value2<<endl;
}
else if (op=='*'){
    cout<<"Multiplication:"<<value1*value2<<endl;
}
else if (op=='/'){
    cout<<"division:"<<value1/value2<<endl;
}
else if (op=='%'){
    cout<<"Mod:"<<(int)value1%(int)value2<<endl;
}
else if (op=='^'){
    cout<<"Power calculation:"<<pow(value1,value2)<<endl;
}
else{
    cout<<"Unknown term";
}
return 0;
}

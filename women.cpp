#include<iostream>
using namespace std;
int main(){
char gender;
cout<<"Enter the gender: "<<endl<<" (If male type M/m/b/B, if female type f/F/g/G/W/w)" <<endl;
cin>>gender;
if(gender=='m'||gender=='M'||gender=='b'||gender=='B'){
    cout<<"Gender: MALE";
}
else if(gender=='f'||gender=='F'||gender=='g'||gender=='G'||gender=='W'||gender=='w'){
    cout<<"Gender: FEMALE";
}
else
    cout<<"Gender: UNKNOWN!!!";
return 0;
}

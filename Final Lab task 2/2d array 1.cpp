#include <iostream>
using namespace std;
int main()
{
    float a[2][4];
    cout<<"Give elements: "<<endl;
    for(int i=0; i<2; i++){
        for (int j=0; j<4; j++){
            cin>>a[2][4];
        }}
//to find the largest elements from the first row//
float max=a[0][0];
for(int i=1; i<4; i++){
    if (a[0][i]>max){
        max=a[0][i];
    }}
//to find the smallest element from the second row//
float min=a[1][0];
for (int i=1; i<4; i++){
    if (a[1][i]<min){
        min=a[1][i];
    }}
cout<<"Largest elements from the first row: "<<max<<endl;
cout<<"Smallest element from the second row: "<<min<<endl;

return 0;
}

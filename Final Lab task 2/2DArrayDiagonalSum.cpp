#include <iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter Row & Column size: ";
    cin>>size;

    int a[size][size];
    cout<<"Enter the values for the matrix:\n";
    for(int i=0; i<size; i++){
    for(int j=0; j<size; j++){
        cin>>a[i][j];
    }}
    int sum=0;
    for (int i=0; i<size; i++){
    sum = sum+a[i][i];
    sum = sum+a[i][size-i-1];
    }
if (size % 2 == 1) {
        int center = size/2;
        sum -= a[center][center];}
    cout<< "Sum of the diagonal values is: "<<sum<<endl;
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter Row & Column size: ";
    cin>>size;

    int a[size][size], b[size][size];
    cout<<"Enter elements for matrix: \n";
    for (int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            cin>>a[i][j];
        }}
        int temp;
        for (int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
        temp = a[i][j];
        a[i][j]=a[j][i];
        a[j][i]=temp;
        }}
    cout<<" Transpose Matrix: \n";
    for( int i=0; i<size; i++){
        for( int j=0; j<size; j++){
            cout<<" "<<a[i][j]<<" ";
        }cout<<endl;
    }
    return 0;
    }

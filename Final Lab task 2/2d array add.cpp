#include <iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter Row & Column size: ";
    cin>>size;

    int a[size][size], b[size][size],ans[size][size];
    cout<<"Enter elements for A matrix: \n";
    for (int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            cin>>a[i][j];
        }}
        cout<<"Enter elements for B matrix: \n";
    for (int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            cin>>b[i][j];
        }}
        for (int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            ans[i][j] = a[i][j]+b[i][j];
        }}
        cout<<"The sum of A & B matrices is: \n";
        for (int i=0; i<size; i++){
            for (int j=0; j<size; j++){
                cout<< ans[i][j]<< " ";
            }
            cout<<endl;
        }
return 0;
}

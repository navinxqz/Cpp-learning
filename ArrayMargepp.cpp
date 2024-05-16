#include <iostream>
using namespace std;

int main(){
    int f,s;
    cout<<endl;
    cout<<"Size of the FIRST ARRAY: ";
    cin>> f;
    cout<<"Size of the SECOND ARRAY: ";
    cin>> s;

    int arr1[f], arr2[s], arr3[f+s];
    cout<<"Input value for FIRST ARRAY: \n";
    for(int i=0; i<f; i++){
        cin>>arr1[i];
    }

    cout<<"Input value for SECOND ARRAY: \n";
    for(int i=0; i<s; i++){
        cin>>arr2[i];
    }

    int j=0;
    for(int i=0; i<f+s; i++){
        if(i<f){
            arr3[i] = arr1[i];
        }else{
            arr3[i] = arr2[j];
            j++;
        }
    }

    //marging
    cout<<"\nAfter marging both ARRAY:\n\t";
    for(int i=0; i<f+s; i++){
        cout<<arr3[i]<<" ";
    }cout<<endl;

    //reversing
    cout<<"Reversing the ARRAY:\n\t";
    for(int i=f+s-1; i>=0; i--){
        cout<<arr3[i]<<" ";
    }cout<<endl;
    
    return 0;
}
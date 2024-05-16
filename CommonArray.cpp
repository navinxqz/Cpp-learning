#include "iostream"
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
    
    int k=0;
    for(int i=0; i<f; i++){
        for(int j=0; j<s; j++){
            if(arr1[i]==arr2[j]){
                arr3[k]=arr2[j];
                k++;
            }
        }
    }
    if(k==0){
        cout<<"\n\tNo Common Data Found!\n";
    }else{
        cout<<"\n\tCommon Datas Are:\n\t\t";
        for(int i=0; i<k; i++){
            cout<<arr3[i]<<" ";
        }cout<<endl;
    }
    return 0;
}
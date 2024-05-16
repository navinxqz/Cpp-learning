#include<iostream>
#include <vector>
using namespace std;

void Merge(vector<int>& arr, int left, int mid, int right){
    vector<int> temp(right-left+1);
    int i=left;     //iterator for left part
    int j=mid+1;    //iterator for right part
    int k = 0;      //iterator for temp arr

    //for copying small elements in temp arr
    while(i<=mid && j<=right){
        if(arr[i] < arr[j]){
            temp[k] = arr[i];
            i++;    k++;
        }else{
            temp[k] = arr[j];
            j++;    k++;
        }
    }
    //copying the rest left part if available
    while(i<=mid){
        temp[k++] = arr[i++];
    }
    //copying the rest right part if available
    while(j<=right){
        temp[k++] = arr[j++];
    }
    //copying temp to main arr
    for(int k=0,i=left; k<temp.size(); k++,i++){
        arr[i] = temp[k];
    }
}

void MergeSort(vector<int>& arr,int left, int right){
    if(left>=right){
        return;
    }   int mid = (left+right)/2;

    MergeSort(arr,left,mid);        //for left part sort
    MergeSort(arr,mid+1,right);     //for right part sort
    Merge(arr,left,mid,right);
}

void print(vector<int>& arr){
    for(int i = 0;i<arr.size();i++){
        cout<<arr[i]<<"  ";
    }   cout<<endl;
}

int main(){
    vector<int> arr = {3,6,2,5,11,33,26};
    cout<<"\nGiven Array:  ";
    print(arr);

    MergeSort(arr, 0, arr.size()-1);
    cout<<"Sorted Array: ";
    print(arr);
    cout<<endl;
    return 0;
}
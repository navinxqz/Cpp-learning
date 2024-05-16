#include <iostream>
#include <vector>
using namespace std;
 
void insertionSort(vector<int>& arr){
int n = arr.size();
 
for(int i=1; i<n; i++){
    int key = arr[i];
    int j = i -1;
 
    while(j>=0 && arr[j]>key){
        arr[j+1] = arr[j];
        j = j-1;
        }   arr[j+1] = key;
    }
}
int main(){
vector<int> arr = {64,25,12,22,11};
cout<<"\n Given array:\t\t";
for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
}   cout<<endl;
 
insertionSort(arr);
cout<<" Insertion array:\t";
for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
}   cout<<endl;
    return 0;
}
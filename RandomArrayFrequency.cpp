#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
    int size,num;
    cout<<"Input size of the Random Array: ";
    cin>>size;

//Random array generate
    int arr[size][size],frequency[size][size];
    cout<<"\n\tArray:\n\t";
    srand(time(0));
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
        arr[i][j]=rand()%10;
        frequency[i][j] = 0;
        }
    }
//Array output
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
        cout<<arr[i][j]<<" ";
    }cout<<endl<<"\t";
    }

    return 0;
}
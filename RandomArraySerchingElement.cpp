#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    int size=5,arr[size][size],num;
    cout<<"\n\tRandom Array:\n\t";
    srand(time(0));
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
        arr[i][j]=rand()%10;
        }
    }

    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
        cout<<arr[i][j]<<" ";
    }cout<<endl<<"\t";
    }
    cout<<"\nInput a value to search: ";
    cin>>num;
    int count=0;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
        if(arr[i][j]==num){
            count++;
        }
        }
    }cout<<num<<" Found Total: "<<count<<" times\n\n";
    return 0;
}
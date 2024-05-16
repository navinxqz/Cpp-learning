#include <iostream>
using namespace std;
int arr[5], maxsize=5, front=-1, back=-1;

//value inserting
void enqueue(int value){
    if(back==maxsize-1){
        cout<<"Queue overflow\n";
        return;
    }
    front=0;
    back++;
    arr[back] = value;
    }
//value exiting
void dequeue(){
    if(front==-1 || front>back){
        cout<<"Queue Underflow\n";
        return;

    }cout<<"Dequeued items: \t";
    front++;
    cout<<arr[front-1]<<"\n\n";
}
//displaying 
void show(){
    if(front==-1){
        cout<<"Empty Queue!\n";
    }else{
        cout<<"Inserted items:\n";
        for(int i=front; i<=back; i++){
            cout<<arr[i]<<endl;
        }
    }
}
int main(){
/*    show();
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    enqueue(6);

    show();
    dequeue();
    dequeue();
    show();
/*
    enqueue(7);
    enqueue(8);
    show();
*/
cout<<"Input 5 items:\n";
for(int i=0; i<5;i++){
cin>>arr[i];
enqueue(arr[i]);
}
show();
    return 0;
}

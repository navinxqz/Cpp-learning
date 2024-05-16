#include <iostream>
using namespace std;
const int maxSize=5;
int arr[maxSize],front=-1, rear=-1;

struct Print{
    int empid;
    string m;
};

bool isEmpty(){
        return ((rear==-1) && (front==-1));
    }
bool isFull(){
        return ((rear+1)%maxSize == front);
    }
void enqueue(Print x){
    if(isFull()){
        cout<<"Printer busy! please wait...\n";
        return;
    }
    if(front ==-1){
        front = 0;
    } rear = (rear+1)%maxSize;
    arr[rear] = x.empid;
    
    cout<<"Command EmployeeID: "<<x.empid<<" : "<<x.m<<endl;
}
void dequeue(){
    if(isEmpty()){
        cout<<"Empty Command! Nothing to print.\n";
        return;
    }
    int result = arr[front];
    if(rear == front){
        rear=front=-1;
    }else{
        front = (front+1)%maxSize;
    }
    cout<<"Printed! Employee ID: "<<result<<endl;
}

int main(){
    Print p1={1, "Print A"};
    Print p2={2, "Print B"};
    Print p3={3, "Print C"};
    Print p4={4, "Print D"};
    Print p5={5, "Print E"};
    Print p6={6, "Print F"};
    Print p7={7, "Print G"};

    enqueue(p1);
    enqueue(p2);
    enqueue(p3);
    enqueue(p4);
    enqueue(p5);
    enqueue(p6);
    enqueue(p7);

    cout<<endl;
    dequeue();
    dequeue();
    cout<<endl;
    enqueue(p6);
    enqueue(p7);
    cout<<endl<<endl;
    
}



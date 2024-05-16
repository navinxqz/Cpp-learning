#include <iostream>
#include <stack>
#include <queue>
using namespace std;

struct Customer {
    int id;
    string name;
};

struct Product{
    int id;
    string name;
    int quantity=0;
};

struct Order{
    Customer customer;
    stack<Product> products;
};

struct Mystack{
    Product* element;
    int maxSize=5;
    int top=0;

    Mystack(){
        element = new Product[maxSize];
    }

    void push(Product value){
        if(top==maxSize){
            cout<<"Limit Exceeded!\n";
            return;
        }
        element[top] = value;
        top++; 
    }

    void pop(){
        if(top>0){
            top--;
            element[top].quantity--;
            if(element[top].quantity<0){
                cout<<"Negative quantity!\n";
                element[top].quantity = 0;
            }
            cout<<"Poped Items: "<<element[top].name<<"  Q: "<<element[top].quantity<<endl;
        }else{
            cout<<"Empty Stack! Nothin to pop.\n";
            return;
        }
    }

    void show(){
        if(top==0){
            cout<<"Empty Stack!\n";
            return;
        } cout<<"List of product in stack: \n";
        for(int i= top-1; i>=0;i--){
            cout<<"ID: "<<element[i].id<<"\tName: "<<element[i].name<<"\tQuantity: "<<element[i].quantity<<endl;
        }
    }
};

struct MyQueue
{
    Order* element;
    int maxSize = 5;
    int front = -1;
    int rear = -1;

    MyQueue(){
        element = new Order[maxSize];
    }
    void enqueue(Order value){
        if(rear==maxSize-1){
            cout<<"Limit Exceeded!\n";
            return;
        }
        rear++;
        element[rear] = value;
    }
    void dequeue(){
        if(front==rear){
            cout<<"Empty List! Nothin to dequeue.\n";
            return;
        }
        cout<<"Dequeued order: "<<element[front+1].customer.name<<endl;
        while(element[front+1].products.empty()==false){
            element[front+1].products.pop();
        }
        front++;
        cout<<endl;
    }
    void show(){
        if(front==rear){
            cout<<"Empty List!\n";
            return;
        }
        cout<<"Displaying List: \n";
        for(int i=front+1; i<=rear; i++){
            cout<<"Name: "<<element[i].customer.name<<"\tID: "<<element[i].customer.id<<endl;
        }
    }
};

int main() {
    Mystack ms;
    MyQueue mq;

    Product p1 = {1, "p1", 3};
    Product p2 = {2, "p2", 5};
    Product p3 = {3, "p3", 5};

    Product p[] = {p1,p2,p3};
    for(int i=0; i<sizeof(p)/sizeof(p[0]); i++){
        ms.push(p[i]);
    }

    Customer c1 = {101, "c1"};
    Customer c2 = {102, "c2"};
    Customer c3 = {103, "c3"};

    Order o1,o2,o3;

    //c1 order push
    for(int i=0;i<5;i++){
        o1.products.push(p1);
    }
     for(int i=0;i<1;i++){
        o1.products.push(p3);
    }
    //c2 order push
    for(int i=0;i<2;i++){
        o2.products.push(p2);
    }
    //c3 push
    for(int i=1;i<3;i++){
        o3.products.push(p1);
    }

    o3.customer = c3;
    o1.customer = c1;
    o2.customer = c2;

    mq.enqueue(o3);
    mq.enqueue(o1);
    mq.enqueue(o2);

    ms.show();
    cout<<endl;
    mq.show();
    cout<<endl;

    //c3 submit the list first
    while(mq.front != mq.rear){
        Order o = mq.element[mq.front+1];
        cout<<"Delivering order for Customer: "<<o.customer.name<<"    ID: "<<o.customer.id<<endl;
    
    while(o.products.empty()==false){
        if(ms.top>0 && ms.element[ms.top-1].name==o.products.top().name){
       // cout<<"poped items: "<<o.products.top().name<<"  Q: "<<o.products.top().quantity<<endl;
        o.products.pop();
        ms.pop();
    }else{
        break;
    }
    }
    mq.dequeue();
    cout<<endl;
    }
    ms.show();
    cout<<endl;

    return 0;
}
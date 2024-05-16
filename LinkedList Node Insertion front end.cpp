#include <iostream>
using namespace std;

struct Node{
    int value;
    Node* Next;
};

void print(Node* n){
    while(n != NULL){
        cout<<n->value<<"\t";
        n= n->Next;
    }
}

void insertfront(Node**head,int p){
    Node* n = new Node();
    n->value = p;
    n->Next = *head;
    *head = n;
}

void insertend(Node**head,int p){
    Node*n = new Node();
    n->value = p;
    n->Next = NULL; 

    if(*head == NULL){      //if linked list is empty, new node will b the head node
        *head = n;
        return;
    }
    Node*last = *head;      //finding the last node
    while(last->Next!=NULL){
        last = last->Next;
    } last->Next = n;
}

int main(){
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->value = 1;
    head->Next = second;
    second->value = 5;
    second->Next = third;
    third->value =3;
    third->Next = NULL;

    insertfront(&head, 7);
    insertend(&head, 98);
    print(head);
    return 0;
}
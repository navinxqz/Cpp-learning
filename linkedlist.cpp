#include <iostream>
using namespace std;

struct Node{
    int value;
    Node* next;

    Node(int v){
        value = v;
        next=NULL;
    }
};

Node* head = NULL;
void Insert(Node* &head, int value){
    Node* n = new Node(value);
    if(head==NULL){
        head = n;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }   temp->next = n;
}

void print(Node* head){
    Node* current = head;
    while (current!=NULL){
        cout<<current->value<<" -> ";
        current = current->next;
    }   cout<<"NULL\n\n"; 
}

bool search(Node* head, int key){
    Node* current = head;
    while (current!=NULL)
    {
        if(current->value==key){
            return true;
        }   current=current->next;
    }   return false;
}
void Ans(bool s){
    if(s=true){
        cout<<"Found\n";
        return;
    }else{
        cout<<"Not found\n";
        return;
    }
}

int main(){
    Node* head = NULL;
    cout<<endl;
    Insert(head,1);
    Insert(head,2);
    Insert(head,3);
    Insert(head,4);

    print(head);

    int s3= search(head,3);
    cout<<"Searching element - 3"<<" : "<<Ans(s3);

    bool s3= search(head,7);
    cout<<"Searching element - 7"<<" : "<<Ans(s3);
    
    return 0;
}
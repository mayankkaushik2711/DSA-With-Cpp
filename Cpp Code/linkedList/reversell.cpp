#include<iostream>
using namespace std;

class Node{
    public:
    int value;
    Node* next;

    Node(int value){
        this->value=value;
        this->next=NULL;
    }
};

void insertAtTail(Node* &tail,int value){
    Node* temp=new Node(value);
    tail->next=temp;
    tail=temp;
}

void print(Node* &tail){
    Node* temp=tail;
    while(temp!=NULL){
        cout<<temp->value<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void reverse(Node* &head){
    Node* current = head;
    Node* prev=NULL;
    Node* forward=NULL;
    while(current != NULL){
        forward=current->next;
        current->next=prev;
        prev=current;
        current=forward;
    }
}

int main(){
    Node* node1=new Node(10);
    Node* head=node1;
    Node* tail=node1;

    insertAtTail(tail,20);
    insertAtTail(tail,40);
    insertAtTail(tail,50);
    print(node1);
    reverse(head);
    print( );

}
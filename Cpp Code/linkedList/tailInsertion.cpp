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

void inserAtTail(Node* &tail,int value){
    Node* temp = new Node(value);
    tail->next=temp;
    tail=temp;
}

void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->value<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    Node* node1=new Node(10);

    Node* tail=node1;
    Node* head=node1;
    print(head);

    inserAtTail(tail,20);

    print(head);

    inserAtTail(tail,40);

    print(head);
}
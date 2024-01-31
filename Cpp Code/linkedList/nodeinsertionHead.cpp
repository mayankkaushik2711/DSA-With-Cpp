#include<iostream>
using namespace std;

class Node{
    public:
    int value;
    Node* next;

    Node(int value){
        this -> value = value;
        this -> next = NULL;
    }
};

void insertAtHead(Node* &node,int value){
    Node* temp = new Node(value);
    temp->next=node;
    node = temp; 

}

void print(Node* &node){
    Node* temp=node;

    while(temp!=NULL){
        cout<<temp->value<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    Node* node1 = new Node(10);

    Node* node=node1;

    print(node);

    insertAtHead(node,20);

    print(node);

    insertAtHead(node,30);

    print(node);


}
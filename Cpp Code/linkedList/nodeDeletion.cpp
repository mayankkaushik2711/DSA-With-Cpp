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

//delete node

void deleteNode(int n,Node* &node1){
    Node* temp=node1;
    int count=1;
    
    while(count<=n-1){
        temp=temp->next;
        count++;
    }

    
}

void insertAtTail(Node* &tail , int value){
    Node* temp = new Node(value);
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

int main(){
    Node* node1=new Node(10);
    Node* tail=node1;

    insertAtTail(tail,10);
    insertAtTail(tail,40);
    insertAtTail(tail,70);
    insertAtTail(tail,20);

    print(node1);
    deleteNode(3,node1);

}
#include<iostream>
using namespace std;

class Node{
    public:
    int value;
    Node* address;

    Node(int value){
        this -> value = value;
        this -> address = NULL;
    }
};

int main(){
    Node* node1 = new Node(10);
    cout<<node1 -> value<<" ";
    cout<<node1 -> address<<" ";
}
// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* next;
// };

// class Stack {
// private:
//     Node* top = nullptr;

// public:
//     bool isEmpty() {
//         return top == nullptr;
//     }

//     void push(int value) {
//         Node* newNode = new Node;
//         newNode->data = value;
//         newNode->next = top;
//         top = newNode;
//     }

//     int pop() {
//         if (isEmpty()) {
//             cout << "Stack is empty" << endl;
//             return -1; 
//         }
//         int data = top->data;
//         // Node* temp = top;
//         top = top->next;
//         // delete temp;
//         return data;
//     }
// };

// int main() {
//     Stack stack;

//     stack.push(12);
//     stack.push(30);
//     stack.push(23);
//     stack.push(42);
//     stack.push(100);

//     while (!stack.isEmpty()) {
//         cout << stack.pop() << endl;
//     }

//     return 0;
// }


#include<iostream>
using namespace std;

struct Node{
    int val;
    Node *next;
};

class stack{
    public:
    Node* top=NULL;

    void push(int val){
        Node* temp=new Node;
        temp->val=val;
        temp->next=top;
        top=temp;
    }

    void pop(){
        if(top==NULL){
            cout<<"stack empty"<<endl;
        }
        else{
            top=top->next;
        }
    }

    void peek(){
        cout<<top->val;
    }

    bool isempty(){
        if(top==NULL){
            return true;
        }
        else{
            return false;
        }
    }

};

int main(){
    stack s;
    s.pop();
    s.push(5);
    s.peek();
    s.pop();
    s.push(6);
    s.peek();
    cout<<s.isempty();

}
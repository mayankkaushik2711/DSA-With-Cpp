#include<iostream>
using namespace std;

class Node {
public:
    int value;
    Node* next;

    Node(int value) {
        this->value = value;
        this->next = NULL;
    }
};

void insertAtTail(Node* &tail, int value) {
    Node* temp = new Node(value);
    tail->next = temp;
    tail = temp;
}

void print(Node* &tail) {
    Node* temp = tail;

    while(temp != NULL) {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* node1 = new Node(10);
    Node* tail = node1;

    insertAtTail(tail, 20);
    insertAtTail(tail, 50);
    insertAtTail(tail, 30);
    print(node1);

    return 0;
}

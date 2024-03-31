// #include <iostream>
// using namespace std;

// const int MAX_SIZE = 100;

// class Queue {
// public:

//     int front;
//     int rear;
//     int arr[MAX_SIZE];

//     Queue() {
//         front = -1;
//         rear = -1;
//     }

//     bool isEmpty() {
//         return (front == -1 && rear == -1);
//     }

//     void enqueue(int x) {
//         if (rear == MAX_SIZE - 1) {
//             cout << "Error: Queue is full" << endl;
//             return;
//         }
//         if (isEmpty()) {
//             front = 0;
//         }
//         rear++;
//         arr[rear] = x;
//     }

//     int dequeue() {
//         int x = -1;
//         if (isEmpty()) {
//             cout << "Error: Queue is empty" << endl;
//             return x;
//         }
//         x = arr[front];
//         if (front == rear) {
//             front = -1;
//             rear = -1;
//         } else {
//             front++;
//         }
//         return x;
//     }
// };

// int main() {
//     Queue queue;

//     queue.enqueue(12);
//     queue.enqueue(112);
//     queue.enqueue(45);

//     cout << queue.dequeue() << endl;
//     cout << queue.dequeue() << endl;
//     cout << queue.dequeue() << endl;

//     return 0;
// }


#include<iostream>
using namespace std;

class queue{
    public:
    int front=-1;
    int rear=-1;
    int size;
    int *arr;

    queue(int size){
        arr=new int[size];
    }

    void push(int val){
        rear++;
        if(rear>=size){
            cout<<"stack overflow"<<endl;
        }
        else{
            arr[rear]=val;
        }

    }

    void pop(){
        if(front==rear){
            cout<<"stack empty"<<endl;
        }
        else{
            front++;
            cout<<arr[front]<<endl;
        }
    }
};

int main(){
    queue q(5);
    q.pop();
    q.push(5);
    q.push(4);
    q.push(3);
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
}
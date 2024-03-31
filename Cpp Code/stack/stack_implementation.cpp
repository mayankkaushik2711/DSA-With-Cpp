#include<iostream>
using namespace std;

class stack{
    public:
    //properties
    int top;
    int *arr;
    int size;

    //functions
    stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }

    void push(int number){
        if(size-top > 1 ){
            top++;
            arr[top]=number;
        }
        else{
            cout<<"stack overflow";
        }
    }

    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"stack underflow";
        }
    }

    void peek(){
        if(top>=0){
            cout<<arr[top];
        }
        else{
            cout<<"stack underflow";
        }
    }

    void isEmpty(){
        if(top>=0){
            cout<<"false";
        }
        else{
            cout<<"true";
        }
    }
};

int main(){
   stack st(5);
//    st.pop();
   st.push(5);
   st.pop();
   st.isEmpty();
   st.push(7);
   st.push(8);
   st.push(2);
   st.push(4);
   st.peek();
}





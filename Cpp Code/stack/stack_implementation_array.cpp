#include<iostream>
using namespace std;

class stack{
    public:
    int top;
    int *arr;
    int size;

    stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }

    void push(int num){
        top++;
        arr[top]=num;
    }

    void pop(){
        if(top>=0){
            top--;
        }
    }

    void peek(){
        cout<<arr[top];
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

    st.isEmpty();
    st.push(5);
    st.peek(); 
    st.isEmpty();
    st.pop();
    st.isEmpty();
}
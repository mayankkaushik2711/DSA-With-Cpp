#include<iostream>
using namespace std;

int fibo(int n){
    if(n==2 || n==1){
        return 1;            //...............1 1 2 3 5 8 13
    }
    return fibo(n-1)+fibo(n-2);
}

int main(){
    cout<<fibo(6);
}
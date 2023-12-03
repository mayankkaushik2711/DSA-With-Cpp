//......................solved by euclids division limma

#include<iostream>
using namespace std;

int small(int a,int b){

    if(a>b){
        return b;
    }
    return a;
}

void call(int divisor,int divident){
    int quotient=divident%divisor;
    
    if(quotient==0){
        cout<<divisor;
        return;
    }

    int remainder=divident-(divisor*quotient);

    call(remainder,divisor);
}

int main(){
    int a=10;
    int b=60;
    int divisor=small(a,b);
    int divident=max(a,b);
    
    call(divisor,divident);
    
}
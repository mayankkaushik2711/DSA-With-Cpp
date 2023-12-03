#include<iostream>
using namespace std;

int pass(int a, int b){
    int small=0;
    if(a>b){
        small=b;
    }
    else{
        small=a;
    }

    for(int i=small ; i>=2 ; i--){
        if(a%i==0 && b%i==0){
            return i;
        }
    }
    return 1;
}

int main(){
    cout<<pass(13,60);
}
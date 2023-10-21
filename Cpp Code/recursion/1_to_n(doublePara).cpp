#include<iostream>
using namespace std;

void print(int start,int till){
    if(start>till){
        return;
    }
    cout<<start<<endl;
    print(start+1,till);
}

int main(){
    print(1,6);
}
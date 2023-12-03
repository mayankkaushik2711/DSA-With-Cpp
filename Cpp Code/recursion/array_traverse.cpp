#include<iostream>
using namespace std;

void print(int arr[],int size){
    if(size==0) return;
    cout<<arr[size-1]<<" ";
    print(arr,size-1);
}

int main(){
    int arr[5]={1,2,3,4,5};
    print(arr,5);
}
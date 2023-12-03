#include<iostream>
using namespace std;

void revPrint(int arr[],int size){
    if(size==0) return;
    cout<<arr[size-1]<<" ";
    revPrint(arr,size-1);
}

int main(){
    int array[5]={1,2,3,4,5};
    revPrint(array,5);
}
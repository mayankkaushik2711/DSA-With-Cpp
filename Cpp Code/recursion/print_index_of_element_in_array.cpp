#include<iostream>
using namespace std;

int position(int arr[],int size,int n){
    if(size==0){
        return -1;
    }
    if(arr[size-1]==n){
        return size-1;
    }
    position(arr,size-1,n);

}

int main(){
    
    int array[9]={9,8,7,6,5,4,3,2,1};
    cout<<position(array,9,4);

}
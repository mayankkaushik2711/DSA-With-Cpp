#include<iostream>
using namespace std;

void insertion(int *arr , int size,int index){
    if(index==size){
        return;
    }
    int store=arr[index];
    int i;
    for(i=index-1 ; i>=0 ; i--){
        if(arr[i]>store){
            arr[i+1]=arr[i];
        }
        else{
            break;
        }
    }
    arr[i+1]=store;
    insertion(arr,size,index+1);


}

int main(){
    int arr[5]={5,4,3,2,1};
    insertion(arr,5,1);

    for(int i=0 ; i<5 ; i++){
        cout<<arr[i]<<" ";
    }
}
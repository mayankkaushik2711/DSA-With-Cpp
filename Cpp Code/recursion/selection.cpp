#include<iostream>
using namespace std;

void selection(int *arr ,int size , int index){
    if(index==size){
        return;
    }
    int min_index=index;
    int min=arr[index];
    for(int i=index+1 ; i<size ; i++){
        if(arr[i]<min){
            min=arr[i];
            min_index=i;
        }
    }
    swap(arr[index],arr[min_index]);
    selection(arr,size,index+1);
}

int main(){
    int arr[5]={5,4,3,2,1};
    selection(arr,5,0);

    for(int i=0 ; i<5  ;i++){
        cout<<arr[i]<<" ";
    }
}
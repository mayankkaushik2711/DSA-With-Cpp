#include<iostream>
using namespace std;

void bubble(int arr[],int size){
    for(int i=0 ; i<size-1 ; i++){
        for(int j=0 ; j<size-i-1 ; j++){
            if(arr[j+1]<arr[j]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0 ; i<size ; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }

    bubble(arr,n);
}
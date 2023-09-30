#include<iostream>
using namespace std;



int findpivot(int arr[],int size){
    int start=0;
    int end=size-1;
    
    int mid=(end+start)/2;
    while(start<end){
        
        if (arr[0]<arr[mid])
        {
            start=mid+1;
        }
        else{
            end=mid;
        }

        mid=(end+start)/2;
        
    }

    return arr[start];

}

int main(){
    int arr[6]={5,6,7,1,2,3};
    
    cout<<findpivot(arr,6);

}
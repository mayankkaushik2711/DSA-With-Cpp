#include<iostream>
using namespace std;
void conPrint(int arr[],int size){
    if(size==0) return;
    for(int i=0 ;i<size ;i++){
        cout<<arr[i]<<" ";
        arr[i-1]=arr[i-1]+arr[i];
    }
    cout<<endl;
    conPrint(arr,size-1);
    

}

int main(){
    
    int array[5]={5,4,3,2,1};
    conPrint(array,5);

}
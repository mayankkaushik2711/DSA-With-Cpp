#include<iostream>
using namespace std;



int main(){
    int arr[5]={5,4,3,2,1};
    
    for(int i=1 ; i<5 ;i++){
        int sel=arr[i];
        int j;
        for(j=i-1 ; j>=0 ; j--){
            if(sel<arr[j]){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=sel;
    }

    for(int i=0 ; i<5 ; i++){
        cout<<arr[i]<<" ";
    }
}
#include<iostream>
using namespace std;

int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int k=3;
    int s=7;
    int store=arr[6];

    while(k>0){
        int store=arr[6];
        int temp=arr[s-1];
        for (int i = s-1; i > 0; i--)
        {
            
            
            arr[i]=arr[i-1];
            
           
        }
        arr[0]=temp;
        
        k--;
    }
    for (int i = 0; i < s; i++)
    {
        cout<<arr[i]<<" ";
    }
    


}

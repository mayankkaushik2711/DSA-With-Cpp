#include<iostream>
using namespace std;

int pairsum(int arr[],int size,int s){
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size ; j++)
        {
            if(arr[i]+arr[j]==s){
                cout<<arr[i]<<" "<<arr[j]<<endl;
            }
        }
        
    }
    
}

int main(){
    int array[5]={1,2,3,4,5};
    pairsum(array,5,5);


}
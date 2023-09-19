#include<iostream>
using namespace std;

int isIntersection(int arr[],int arr1[],int size,int size2){
    
    for (int i = 0; i < size; i++)
    {
        
        for (int j = 0; j < size2; j++)
        {
            if( arr[i] == arr1[j] ){
                cout<<"["<<arr[i]<<"]"<<" ";
            }
        }

       
        
    }
    
}

int main(){
    int array[5]={1,2};
    int array1[6]={1,2,3};
    isIntersection(array,array1,5,6);
}
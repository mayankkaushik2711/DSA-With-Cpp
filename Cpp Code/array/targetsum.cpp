#include<iostream>
using namespace std;

int isSum(int arr[],int size,int sum){
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (arr[i]+arr[j]==sum && i!=j)
            {
                cout<<"["<<i<<","<<j<<"]"<<endl;
            }
            
        }
        
    }
    
}

int main(){
    int array[6]={1,2,3,4,5,6};
    int s=7;
    isSum(array,6,7);
}
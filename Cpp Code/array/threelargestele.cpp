#include<iostream>
using namespace std;

int large(int arr[],int s){
    int max1=0;
    int max2=0;
    int max3=0;

    for (int i = 0; i < s; i++)
    {
        
        if (arr[i]>max1)
        {
            max3=max2;
            max2=max1;
            max1=arr[i];
        }

        else if (arr[i]>max2)
        {
            max3=max2;
            max2=arr[i];
        }

        else if (arr[i]>max3)
        {
            max3=arr[i];
        }
        
    }

    cout<<max1<<" "<<max2<<" "<<max3;

    
    
}

int main(){
    int arr[5]={4,2,1,3,9};
    large(arr,5);
   
    
}
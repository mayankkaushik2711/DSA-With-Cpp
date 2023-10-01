#include<iostream>
using namespace std;

int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int k=3;
    int s=7;
    int store=arr[6];

    while(k>0){
        int store=arr[6];
        for (int i = 0; i < s-1; i++)
        {
            arr[i+1]=arr[i];
           
        }
        store=arr[0];
        k--;
    }
    for


}

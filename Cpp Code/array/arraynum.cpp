#include<iostream>
using namespace std;

int addtwonumbers(int arr1[],int size1,int arr2[],int size2){
    int num=0;
    for (int i = size1-1; i >=0 ; i--)
    {
        num=num*10+arr1[i];
    }
    int num1=0;
    for (int i = size2-1; i >=0 ; i--)
    {
        num1=num1*10+arr2[i];
    }
    int sum=num+num1;
    
    return sum;

}

int main(){
    int array1[3]={1,2,3};
    int array2[3]={2,3,4};
    int a=addtwonumbers(array1,3,array2,3);
    
    while (a!=0)
    {
        int rem=a%10;
        cout<<rem<<" ";
        a=a/10; 
    }
    
    
}

//lalit

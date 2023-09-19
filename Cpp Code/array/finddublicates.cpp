//                                         // brute forced

// #include<iostream>
// using namespace std;

// int dubli(int arr[],int size){
//     for (int i = 0; i < size; i++)
//     {
//         bool isDubli=false;
//         for (int j = 0; j < size; j++)
//         {
//             if( i!=j && ( arr[i] == arr[j] ) ){
//                 isDubli=true;
//                 break;
//             }
//         }
//         if(isDubli){
//             return arr[i];
//         }
        
//     }
    
// }

// int main(){
//     int a;
//     cin>>a;
//     int array[a];
//     for (int i = 0; i < a; i++)
//     {
//         cin>>array[i];
//     }
//     dubli(array,a);
    
// 

//...............................//optimised//.......................... 

#include<iostream>
using namespace std;

int dubli(int arr[],int size){
    int ans=0;
    for (int i = 0; i < size; i++)
    {
        ans=ans^arr[i];
    }

    for(int i=1 ; i <size ; i++)
    {
        ans=ans^i;
    }
    return ans;
}

int main(){
    int array[5]={1,2,3,1,4};                      //output = 0
    cout<<dubli(array,5)<<endl;

    int array2[7]={6,3,1,5,4,3,2};                 //output = 3
    cout<<dubli(array2,7);
}


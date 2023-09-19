// #include<iostream>
// using namespace std;

// void printarray(int array[] , int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         cout<<array[i];
//     }
    
// }

// int main()
// {
//     int arr[]={1,2,3,4,5,6,7};
//     printarray(arr,4);
// }

// #include<iostream>
// using namespace std;

// void printarray(char array[],int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         cout<<array[i];
//     }
    
// }

// int main()
// {
//     char arr[]={'a','b','c','d','e'};
//     int a=sizeof arr;
//     printarray(arr,a);
// }

#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"enter a no";
    cin>>number;
    int array[number];
    for (int i = 0; i < number; i++)
    {
       cin>>array[i];
    }
    cout<<"array is "<<endl;
    for (int i = 0; i < number; i++)
    {
        
       cout<<array[i]+1<<" ";
    }
    
}
// #include<iostream>
// using namespace std;

// int main(){
//     int arr[3][3]={1,2,3,4,5,6,7,8,9};
    
//     for(int i=0; i<3 ; i++){
//         int sum=0;
//         for(int j=0 ; j<3 ; j++){
//             sum=sum+arr[i][j];
//         }
//         cout<<sum<<endl;
//     }
// }

// ........................Using function...................

#include<iostream>
using namespace std;

int rowSum(int array[3][3],int row , int col){
    for(int i=0 ; i< row ; i++){
        int sum=0;
        for(int j=0 ; j< col ; j++){
            sum=sum+array[i][j];
        }
        cout<<sum<<endl;
    }
}

int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};

    rowSum(arr,3,3);
}
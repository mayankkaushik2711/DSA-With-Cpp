// #include<iostream>
// using namespace std;

// int main(){
//     int arr1[2][2]={1,2,3,4};
//     int arr2[2][2]={1,2,3,4};
//     int arr[2][2];

//     for(int i=0 ; i<2 ;i++){
//         for(int j=0 ; j<2 ; j++){
//             arr[i][j]=0;  
//             for(int k=0 ; k<2 ; k++){
//                 arr[i][j] += (arr1[i][k] * arr2[k][j]);
//             }     
//         }
//     }

//     for(int i=0 ; i<2 ; i++){
//         for(int j=0 ; j<2 ; j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

#include<iostream>
using namespace std;

int main(){
    int arr1[2][2]={1,2,3,4};
    int arr2[2][2]={1,2,3,4};
    int arr[2][2];

    for(int i=0 ; i<2 ;i++){
        for(int j=0 ; j<2 ; j++){
            arr[i][j]=0;  
            int k=0;
            while(k<2){
                arr[i][j] += (arr1[i][k] * arr2[k][j]);
                k++;
            }     
        }
    }

    for(int i=0 ; i<2 ; i++){
        for(int j=0 ; j<2 ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

// #include<iostream>
// #include<vector>
// using namespace std;

// void sub_array(int *arr,vector<int> emp , int index , int size){
//     //base case
//     if(index==size){
//         for(int i=0 ; i<emp.size() ; i++){
//             cout<<emp[i]<<" ";
//         }
//         cout<<endl;
//         return;
//     }
//     int ele=arr[index];
//     sub_array(arr,emp,index+1,size);
//     emp.push_back(ele);
//     sub_array(arr,emp,index+1,size);
// }

// int main(){
//     int arr[5]={1,2,3,4,5};
//     vector<int> emp;
//     sub_array(arr,emp,0,5);
// }
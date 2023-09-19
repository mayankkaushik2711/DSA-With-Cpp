// #include<iostream>
// using namespace std;

// int unique(int arr[],int size){
//     int store;
//     for (int i = 0; i < size; i++)
//     {
//         bool isunique=true;
//         for (int j = 0 ; j < size ; j++)
//         {
//             if( ( arr[i] == arr[j] ) && i!=j ){
//                 isunique=false;
//                break;
//             }
            
//         }

//         if(isunique){
//             cout<<arr[i]<<" ";
//         }
        
//     }
    
// }

// int main(){
//     int array[]={2,3,4,1,2,3};
//     unique(array,6);
// }

// #include <iostream>
// using namespace std;

// void unique(int arr[], int size) {
//     for (int i = 0; i < size; i++) {
//         bool isUnique = true; // Assume the element is unique

//         for (int j = 0; j < size; j++) {
//             if (i != j && arr[i] == arr[j]) {
//                 isUnique = false; // Found a non-unique element
//                 break;
//             }
//         }

//         if (isUnique) {
//             cout << arr[i] << " ";
//         }
//     }
// }

// int main() {
//     int array[] = {2, 3, 4, 1, 2, 3};
//     unique(array, 6);
//     return 0;
// }



 #include<iostream>
 using namespace std;

 int isDubli(int arr[],int s){
    int ans=0;
    for (int i = 0; i < s; i++)
    {
        ans=ans^arr[i];
    }
    for (int j = 1; j < s; j++)
    {
        ans=ans^j;
    }
    
    return ans;
 }
 int main(){
    int array[5]={1,2,3,3,4};
    cout<<isDubli(array,5);
 }
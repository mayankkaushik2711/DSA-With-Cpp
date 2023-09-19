// #include<iostream>
// #include<algorithm>
// using namespace std;

// int sort(int arr[],int size){
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i]>arr[i+1])
//         {
//             swap(arr[i],arr[i+1]);
//             while (i!=0)
//             {
//                 if (arr[i]<arr[i-1])
//                 {
//                     swap(arr[i],arr[i-1]);
//                 }
//                 i--;
                
//             }
            
//         }

        
        
//     }
//     for (int i = 0; i < size; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
    
    
    
// }

// int main(){
//     int array[6]={2,1,5,0,3,4};
//     sort(array,6);
// }
// #include<iostream>
// using namespace std;

// int searchInsert(int arr[], int target) {
        
//         for(int i=0 ; i<4 ; i++){
            
//             if ( arr[i]==target ){
//                 return i;
//             }
//             else if(arr[i]>target && target>arr[i-1]){
//                 return i;
//             }

          
//         //    return 0; 
//         }
//     }
// int main(){
//     int array[4]={1,3,5,6};
//     int no=7;
//    int z=searchInsert(array,no);
//    cout<<z;
// }



// ............................................insertion sort..................................................


// #include<iostream>
// using namespace std;

// void insertion(int arr[],int s){
//     for (int i = 0; i < s-1; i++)
//     {
//         if (arr[i]>arr[i+1])
//         {
//             int temp=arr[i];
//             arr[i]=arr[i+1];
//             arr[i+1]=temp;

//             for (int j = i; j > 0; j--)
//             {
//                 if (arr[j]<arr[j-1])
//                 {
//                     int temp1=arr[j];
//                     arr[j]=arr[j-1];
//                     arr[j-1]=temp1;
//                 }
                
//             }
             
            
//         }
        
//     }
    
// }

// int main(){
//     int arr[7]={5,2,3,1,4,0,40};
//     insertion(arr,7);
//     for (int i = 0; i < 7; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
    
// }
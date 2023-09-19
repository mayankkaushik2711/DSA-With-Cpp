// // #include<iostream>
// // using namespace std;

// // int searchLeft(int arr[],int s,int t){
// //     int start=0;
// //     int end=s-1;
    
// //     int ans=-1;
// //     while(end>=start){
// //         int mid=(start+end)/2;
// //        if (arr[mid]==t)
// //        {
// //         ans=mid;
// //         end=mid-1;
// //        }
// //        else if(arr[mid]>t){
// //         end=mid-1;
// //        }
// //        else{
// //         start=mid+1;
// //        }
       
       
// //     }
// //     return ans;
// // }
    
// // int searchRight(int arr[],int s,int t){
// //     int start1=0;
// //     int end1=s-1;
    
// //     int ans1=-1;
// //     while(end1>=start1){
// //     int mid1=(start1+end1)/2;
// //        if (arr[mid1]==t)
// //        {
// //         ans1=mid1;
// //         start1=mid1+1;
// //        }
// //        else if(arr[mid1]<t){
// //         start1=mid1+1;
// //        }
// //        else{
// //         end1=mid1-1;
// //        }
       
       
// //     }
    

// //     return ans1;
        
// //     }

// // int main(){
// //     int array[6]={0,1,3,3,3,6};
// //     int target=3;
// //     cout<<searchLeft(array,6,3);
// //     cout<<searchRight(array,6,3);
   
// // }
// #include<iostream>
// using namespace std;

// int searchLeft(int arr[], int s, int t) {
//     int start = 0;
//     int end = s - 1;
//     int ans = -1; // Initialize ans to -1
//     while (end >= start) {
//         int mid = start + (end - start) / 2; // Calculate mid this way to avoid potential overflow
//         if (arr[mid] == t) {
//             ans = mid;
//             end = mid - 1; // Move towards left to find leftmost occurrence
//         } else if (arr[mid] > t) {
//             end = mid - 1;
//         } else {
//             start = mid + 1;
//         }
//     }
//     return ans;
// }

// int searchRight(int arr[], int s, int t) {
//     int start1 = 0;
//     int end1 = s - 1;
//     int ans1 = -1; // Initialize ans1 to -1
//     while (end1 >= start1) {
//         int mid1 = start1 + (end1 - start1) / 2;
//         if (arr[mid1] == t) {
//             ans1 = mid1;
//             start1 = mid1 + 1; // Move towards right to find rightmost occurrence
//         } else if (arr[mid1] < t) {
//             start1 = mid1 + 1;
//         } else {
//             end1 = mid1 - 1;
//         }
//     }
//     return ans1;
// }

// int main() {
//     int array[6] = {0, 1, 3, 3, 3, 6};
//     int target = 3;
//     cout << "Leftmost occurrence: " << searchLeft(array, 6, target) << endl;
//     cout << "Rightmost occurrence: " << searchRight(array, 6, target) << endl;
// }

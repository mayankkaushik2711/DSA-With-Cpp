// #include<iostream>
// using namespace std;

// int main(){
//     int arr[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
//     int l,r,t,b;
//     t=0;
//     l=0;
//     b=3;
//     r=3;

//     for(int i=0 ; i<4 ;i++){
//         for(int j=0 ; j<4 ; j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//     int fele=0;
//     int sele=0;
//     int tele=0;
    
//     while(r>=l && b>=t){
//         for(int j=r ; j>l ; j--){
//             fele=r;
//             arr[t][j]=arr[t][j-1];
//         }
//         t++;

//         for(int j=b ; j>=t ; j--){
//             sele=b;
//             if (j==t)
//             {
//                 arr[t][r]=arr[fele][r];
//             }
//             else
//             {
//                 arr[j][r]=arr[j-1][r];
//             }
//         }
//         r--;

//         for(int j=l ; j<=r ; j++){
//             tele=l;
//             if (j==r)
//             {
//                 arr[b][j]==arr[b][sele];
//             }
            
//             else
//             {
//                 arr[b][j]=arr[b][j+1];
//             }
//         }
//         b--;

//         for(int j=t-1 ; j<=b ; j++){
//             if(j=b)
//             {
//                 arr[j][l]=arr[tele][l];
//             }
//             else
//             {
//             arr[j][l]=arr[j+1][l];
//             }
//         }
//         l++;

        
//     }
//      cout<<"after shift"<<endl;

//     for(int i=0 ; i<4 ;i++){
//         for(int j=0 ; j<4 ; j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }



// }


#include<iostream>
using namespace std;

int main(){
    int arr[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};

    cout<<"before shifting\n";

    for(int i=0 ; i<4 ;i++){
        for(int j=0 ; j<4 ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"after shifting matrix is\n";

    int top=0;
    int bottom=3;
    int left=0;
    int right=3;


    while(right>=left && bottom >= top){                     //temp=previous element
        int temp=arr[top][left];                             //tem=current

        for(int i=left+1 ; i<=right; i++){
            int tem=arr[top][i];
            arr[top][i]=temp;
            temp=tem;
        }
        top++;
        

        for(int i=top ; i<=bottom ;i++){
            int tem=arr[i][right];
            arr[i][right]=temp;
            temp=tem;
        }
        right--;

        for(int i=right ; i>=left ; i--){
            int tem=arr[bottom][i];
            arr[bottom][i]=temp;
            temp=tem;
        }
        bottom--;

        for(int i=bottom ; i>=(top-1) ; i--){
            int tem=arr[i][left];
            arr[i][left]=temp;
            temp=tem;
        }
        left++;


    }

    for(int i=0 ; i<4; i++){
        for(int j=0 ; j<4 ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

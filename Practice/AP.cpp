// #include<iostream>
// using namespace std;

// int ap(int n){
//     int anth=(3*n)+7;
//     return anth;
// }

// int main(){
//     int n;
//     cin>>n;
//     int ans=ap(n);
//     cout<<ans;
// }
// //do some more practice



#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[4][3]={1,2,3,0,5,6,7,8,1,2,3,0};
    for(int i=0 ; i<4 ; i++){
        for(int j=0 ; j<3 ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    cout<<endl;
    
    int row=0;
    int col=0;
    int index=0;
    vector<int> vect;
    for(int i=0 ; i<4 ; i++){
        for(int j=0 ; j<3 ; j++){
            if(arr[i][j]==0){
                row=i;
                col=j;
                // index=row*10+col;
                vect.push_back(row);
                vect.push_back(col);
            }
        }
    }
    
    
    
    
    
    for(int i=0 ; i<vect.size() ; i=i+2)
    {
        int c=vect[i+1];
        int r=vect[i];
         for(int a=0 ; a<4 ; a++){
                arr[a][c]=0;
                arr[r][a]=0;
    }
    
    
        
    }
     for(int i=0 ; i<4 ; i++){
        for(int j=0 ; j<3 ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
}
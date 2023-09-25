
#include<iostream>
using namespace std;

int main(){
    int arr[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};

    cout<<"matrix is\n";

    for(int i=0 ; i<4 ;i++){
        for(int j=0; j<4 ; j++ ){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int loop=(4*2)-1;
    int m=0;

    for (int k = 0; k <= loop; k++)
    {
        if(k%2!=0){
            for (int i = 0; i <= m; i++)
            {
                int j=m-i;
                if(i<4 && j<4)
                {
                    cout<<arr[i][j]<<" ";
                }
            }
            
        }

        else{
            for(int i=0 ; i<=m ; i++)
            {
                int j=m-i;
                if(i<4 && j<4)
                {
                    cout<<arr[j][i]<<" ";
                }
            }
        }

        m++;
    }
    
    
}
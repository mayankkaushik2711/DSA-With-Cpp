#include<iostream>
using namespace std;

int main(){
    int array[3][3];
    for(int i=0; i<3 ; i++){
        for(int j=0; j<3; j++){
            cin>>array[i][j];
        }
    }

    int col=0;
    while(col<3){
        if(col%2==0){
            for(int row=0 ; row<3 ; row++){
                cout<<array[row][col]<<" ";
            }
            col++;
        }
        else{
            for(int row=2 ; row>=0 ; row--){
                cout<<array[row][col]<<" ";
            }
            col++;
        }
    }
   
    cout<<endl;

    for(int i=0; i<3 ; i++){
        for(int j=0; j<3; j++){
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
}
#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int array[a][b];

    for (int i = 0; i < a; i++)
    {
        for(int j=0 ; j<b ; j++){
            cin>>array[i][j];
        }
    }
    
    int row=0;
    int col=b-1;
    int sum=0;
    for (int i = 0; i < b; i++)
    {
        sum=sum+array[row][col];
        
        row++;
        col--;
    }
    cout<<sum;
    

}
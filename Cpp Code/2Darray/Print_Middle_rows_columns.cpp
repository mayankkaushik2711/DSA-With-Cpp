#include<iostream>
using namespace std;

int main(){
    cout<<"make sure u are taking row and column in odd numbers\n";

    cout<<"number of rows";
    int row;
    cin>>row;

    cout<<"number of columns";
    int column;
    cin>>column;

    int arr[row][column];

    for (int i = 0 ; i < row ; i++)
    {
        for(int j = 0 ; j < column ; j++){
            cin>>arr[i][j];
        }
    }

    for(int i = 0 ; i < row ; i++){
        

        for (int j = 0; j < column; j++)
            {
                if(j==column/2)
                {
                 cout<<arr[i][j]<<" ";
                }

                else if(i==row/2){
                    cout<<arr[i][j]<<" ";
                }
            }

            cout<<"\n";

    }


    

}
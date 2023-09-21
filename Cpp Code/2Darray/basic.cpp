#include<iostream>
using namespace std;

int main(){
    int m;
    int n;
    cin>>m>>n;
    
    int arr[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
        
    }

    cout<<"2darray is\n";
    cout<<"yo boy\n";

     for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
    }

    cout<<"finding index\n";

    int f=4;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j]==f)
            {
                cout<<i<<" "<<j;
                break;
            }
            
        }
        cout<<endl;
        
    }
    
}

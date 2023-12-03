#include<iostream>
using namespace std;

class matrixsum{
public:
    int row;
    int col;
    int arr[20][20];
    int arr1[20][20];
    int ansarr[20][20];

    matrixsum(int a,int b){
        row=a;
        col=b;
    }

    matrixsum(){};

    void getmat(){
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cin>>arr[i][j];
            }
            
        }
        
    }

    

    matrixsum operator +(matrixsum c){
        matrixsum answer;
        answer.row=row;
        answer.col=col;
        for (int i = 0; i < answer.row; i++)
        {
            for(int j=0 ; j< answer.col ; j++){
                answer.ansarr[i][j]=c.arr[i][j] + arr[i][j];
            }
        }
        return answer;
        
    }

    
        void show(){
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cout<<ansarr[i][j];
            }
            
        }
        
    }
    

};


int main(){
    int m,n;
    cin>>m>>n;

    matrixsum A(m,n) , B(m,n) , C(m,n);

    A.getmat();
    B.getmat();
    C=A+B;
    C.show();
}
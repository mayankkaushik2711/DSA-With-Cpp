// #include<iostream>
// #include<vector>
// using namespace std;

// bool check(vector<vector<int>> &vect, int row, int col){
//     // Check horizontally
//     for(int i = 0 ; i < col ; i++){
//         if(vect[row][i] == 1){
//             return false;
//         }
//     }
//     // Check vertically
//     for(int i = 0 ; i < row ; i++){
//         if(vect[i][col] == 1){
//             return false;
//         }
//     }
//     // Check diagonally
//     for(int i = row, j = col ; i >= 0 && j >= 0 ; i--, j--){
//         if(vect[i][j] == 1){
//             return false;
//         }
//     }
//     return true;
// }

// bool nQueen(vector<vector<int>> &vect, int row, int size){
//     if(row == size){
//         return true; // Successfully placed queens in all rows
//     }
//     for(int col = 0 ; col < size ; col++){
//         if(check(vect, row, col)){
//             vect[row][col] = 1;
//             if(nQueen(vect, row + 1, size)){
//                 return true; // Found a solution
//             }
//             vect[row][col] = 0; // Backtrack
//         }
//     }
//     return false; // Cannot place a queen in this row
// }

// int main(){
//     vector<vector<int>> vect(5,vector<int> (5,0));
//     nQueen(vect,0,5);

//     for(int i=0 ; i<5 ; i++){
//         for(int j=0 ; j<5 ; j++){
//             cout<<vect[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }


#include<iostream>
#include<vector>
using namespace std;

bool check(vector<vector<int>> &vect,int row,int col){
    //checking horizontally
    for(int i=0 ; i<col ; i++){
        if( vect[row][i]==1 ){
            return false;
        }
    }
    for(int i=0 ; i<row ; i++){
        if(vect[i][col]==1){
            return false;
        }
    }
    for(int i=row,j=col ; j>=0 && i>=0 ; j--,i--){
        if(vect[i][j]==1){
            return false;
        }
    }
    return true;
}

bool nqueen(vector<vector<int>> &vect,int row,int size){
    if(row==size){
        return true;
    }
    for(int col=0 ; col<size ; col++){
        if(check(vect,row,col)){
            vect[row][col]=1;
            if(nqueen(vect,row+1,size)){
                return true;
            }
            vect[row][col]=0;
        }
        
    }
    
    return false;
}

int main(){
    vector<vector<int>> vect(4,vector<int>(4,0));
    nqueen(vect,0,4);

    for(int i=0 ; i<4 ; i++){
        for(int j=0 ; j<4 ; j++){
            cout<<vect[i][j]<<" ";
        }
        cout<<endl;
    }
}
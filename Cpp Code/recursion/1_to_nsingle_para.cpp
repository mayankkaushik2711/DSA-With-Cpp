#include<iostream>
using namespace std;


// void print(int num){
//     if(num==0){
//         return;
//     }
//     print(num-1);
//     cout<<num<<endl;
// }

// int main(){
//     print(6);
// }

int print(int n){
    if(n==0){
        return 1;
    }
        print(n-1);
        cout<<n<<" ";
    }

int main(){
    print(5);
}
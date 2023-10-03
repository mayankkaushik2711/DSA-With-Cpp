// #include<iostream>
// using namespace std;

// int main(){

    
//     for(int i=2 ; i<=100 ; i++){
//         bool flag=true;
//             for (int j = 2; j < i; j++)
//             {
//                 if(i%j==0){
//                     flag=false;
//                     break;
//                 }
//             }

//         if(flag){
//         cout<<i<<" ";
//         }
        
//     }
// }
#include<iostream>
using namespace std;
void add(int a,int b){
    cout << a+b;
}
void add(float a,int b){
    cout << a+55;
}
int main(){
    float a = 4;
    int b = 6;
    add(a,b);
    cout << endl;
    add(a,b);
}
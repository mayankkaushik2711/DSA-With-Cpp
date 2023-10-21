// #include<iostream>
// using namespace std;

// void fun(int x){
//     if(x==0){
//         return;
//     }
//     cout<<"GM"<<endl;
//     fun(x-1);
// }
// int main(){
//     fun(4);
// }


#include<iostream>
using namespace std;

void fun(int x){
    if(x==0){
        return;
    }
    cout<<"good morning"<<endl;
    fun(x-1);
}

int main(){
    int n;
    cout<<"enter a no"<<endl;
    cin>>n;
    fun(n);
}
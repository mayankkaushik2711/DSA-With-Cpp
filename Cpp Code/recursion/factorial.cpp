#include<iostream>
using namespace std;

int fact(int num){
    if (num==0){
        return 1;
    }
    int facto=num;
    facto=facto*fact(num-1);
}
int main(){
    int n;
    cout<<"enter a no"<<endl;
    cin>>n;
    cout<<fact(n);
}
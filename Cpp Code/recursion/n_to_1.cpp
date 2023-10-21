#include<iostream>
using namespace std;

void rev(int num){
    if(num==0){
        return;
    }
    cout<<num<<endl;
    num--;
    rev(num);

}

int main(){
    int n;
    cout<<"enter a no"<<endl;
    cin>>n;
    rev(n);
}
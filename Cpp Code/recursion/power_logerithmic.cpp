#include<iostream>
using namespace std;

int pow(int num,int p){
    int check=p;
    int ans=0;
    if(p==1){
        return num;
    }
    
    ans=pow(num,p/2);

    if(check%2==0){
        return ans*ans;
    }
    else{
        return   ans*ans*num;
    }

}

int main(){
    int num,p;
    cin>>num>>p;

    cout<<5*5*5<<" ";
    cout<<pow(num,p);
}
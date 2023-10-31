#include<iostream>
#include<cmath>
using namespace std;

int power(int num,int p){
    if(p==0){
        return 1;
    }
    int ans=num*power(num,p-1);
    return ans;
    
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<power(a,b);

}
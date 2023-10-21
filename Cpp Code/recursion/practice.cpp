#include<iostream>
using namespace std;

int product(int num){
    
    if (num==1)
    {
        return 1;
    }
    else{
        int pro=num*product(num-1);
        return pro;
    }
}

int main(){
    int n;
    cin>>n;
    cout<<product(n);
}
// coding is love

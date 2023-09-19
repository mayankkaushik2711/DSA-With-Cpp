#include<iostream>
using namespace std;

int fibo(int n){
    if(n<=1){
        return 0;
    }
    else if(n==2){
        return 1;
    }
    int sum;
    int firstno=0;
    int secondno=1;
    for (int i = 2; i < n; i++)
    {
        
        sum=firstno+secondno;
        firstno=secondno;
        secondno=sum;
        
       
    }
return sum;
     
}

int main(){
    int a;
    cin>>a;
    cout<<fibo(a);
}

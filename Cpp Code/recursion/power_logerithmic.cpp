// #include<iostream>
// using namespace std;

// int pow(int num,int p){
//     int check=p;
//     int ans=0;
//     if(p==1){
//         return num;
//     }
    
//     ans=pow(num,p/2);

//     if(check%2==0){
//         return ans*ans;
//     }
//     else{
//         return   ans*ans*num;
//     }

// }

// int main(){
//     int num,p;
//     cin>>num>>p;

//     cout<<5*5*5<<" ";
//     cout<<pow(num,p);
// }

#include<iostream>
using namespace std;

int pow(int num,int power){

    if(power==0){
        return 1;
    }
    
    if(power==1){
        return num;
    }
    int ans=pow(num,power/2);
    if(power%2==0){
        return ans*ans;
    }
    else{
        return ans*ans*num;
    }
}

int main(){
    cout<<pow(3,0);
}
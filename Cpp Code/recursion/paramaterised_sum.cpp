// #include<iostream>
// using namespace std;

// int sum(int num){
//     if(num==1){
//         return 1;
//     }
//     int ans=num+sum(num-1);
//     return ans;
// }

// int main(){
//     cout<<sum(5);
// }




#include<iostream>
using namespace std;

void sum(int s,int end){
    if(end==0){
        cout<<s<<endl;
        return;
    }
    
    sum(s+end,end-1);
    
    
}

int main(){
    sum(0,5);
}
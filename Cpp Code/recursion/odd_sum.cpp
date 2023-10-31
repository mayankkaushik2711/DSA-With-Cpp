#include<iostream>
using namespace std;

int oddsum(int start,int end){
    if(start>end){
        return 0;
    }
   
      if(start%2==0){
        oddsum(start+1,end);
       }
        else{
            int ans=start+oddsum(start+2,end);
            return ans;
        }
    
}

int main(){
    
    cout<<oddsum(2,6);
}
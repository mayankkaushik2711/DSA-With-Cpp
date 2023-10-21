#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[6]={1,2,3,4,5,6};
    int s=11;
    int start=0;
    int end=0;
    int sum=0;
    vector<int> array;

    while(end<=6)
    {
        sum=sum+arr[end];
            while(sum>s){
                sum=sum-arr[start];
                start++;
            }
            if(sum==s){
                cout<<start+1<<" "    <<end+1;
            }
        
        end++;
    }
}
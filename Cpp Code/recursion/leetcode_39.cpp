#include<iostream>
#include<vector>
using namespace std;

void call(int arr[] , vector<int> vect , int n , int index,int size){
    if(n==0){
        for(int i=0 ; i<vect.size() ; i++){
            cout<<vect[i]<<" ";
        }
        cout<<endl;
        return;
    }
    if(n<0) return;

    for(int i=0 ; i<size ; i++){
        vect.push_back(arr[i]);
        call(arr,vect,n-arr[i],i,size);
        vect.pop_back();
    }
}

int main(){
    int arr[3]={2,3,5};
    int n=8;
    vector<int> vect;
    call(arr,vect,n,0,3);

}
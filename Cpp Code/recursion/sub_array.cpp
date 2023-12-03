#include<iostream>
#include<vector>
using namespace std;

void call(int arr[],vector<int> emp ,int index,int size){
    if(index==size){
        for(int i=0 ; i<emp.size() ; i++){
            cout<<emp[i];
        }
        cout<<endl;
        return;
    }

    int var=arr[index];
    call(arr,emp,index+1,size);


    if(emp.size()==0){
        emp.push_back(var);
        call(arr,emp,index+1,size);
    }
    else if(arr[index-1]==emp[emp.size()-1]){
        emp.push_back(var);
        call(arr,emp,index+1,size);
    }
    
    
}

int main(){
    int arr[3]={1,2,3};
    vector<int> emp;
    int size=sizeof(arr)/sizeof(arr[0]);
    call(arr,emp,0,size);
}
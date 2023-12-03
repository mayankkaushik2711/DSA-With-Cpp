#include<iostream>
#include<vector>
using namespace std;

void rem1(int arr[],vector<int> vecto,int index,int size){
    if(size==index){
        for (int i = 0; i < vecto.size() ; i++)
        {
            cout<<vecto[i];
        }
        
        return;
    }

    int number=arr[index];
    if(number==1){
        rem1(arr,vecto,index+1,size);
    }
    else{
        vecto.push_back(arr[index]);
        rem1(arr,vecto,index+1,size);
    }
}

int main(){
    int arr[5]={1,2,3,1,1};
    vector<int> vecto;
    rem1(arr,vecto,0,5);
}

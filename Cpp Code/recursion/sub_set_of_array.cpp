#include<iostream>
#include<vector>
using namespace std;

void subArray(int arr[] , vector<int> vecto ,int index, int size){
    if(index==size){
        for (int i = 0; i < vecto.size() ; i++)
        {
            cout<<vecto[i]<<" ";
        }cout<<endl;
        return;
    }
    int num=arr[index];
    subArray(arr,vecto,index+1,size);
    vecto.push_back(num);
    subArray(arr,vecto,index+1,size);

}

int main(){
    int arr[3]={1,2,3};
    vector<int> vecto;
    subArray(arr,vecto,0,3);
}  



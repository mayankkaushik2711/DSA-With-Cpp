#include<iostream>
using namespace std;
int main(){
    int max = 0;
    int smax = 0;
    int tmax = 0;
    int arr[5] = {8,2,7,5,4};
    for(int i=0;i<5;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    cout << max << endl;
    for(int i=0;i<5;i++){
        if(smax<arr[i] && arr[i]!=max){
            smax = arr[i];
        }
    }
    cout << smax << endl;
    for(int i=0;i<5;i++){
        if(tmax<arr[i] && arr[i]!=smax && arr[i]!=max){
            tmax = arr[i];
        }
    }
    cout << tmax;
}
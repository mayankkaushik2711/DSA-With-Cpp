#include<iostream>
using namespace std;

int main(){
    int array[5]={1,2,3,4,5};
    int position;
    cin>>position;

    for(int i=position ; i<5 ;i++){
        cout<<array[i];
    }

    cout<<array[position-1];
  
   for(int i=0 ; i<position-1 ;i++){
        cout<<array[i];
    }

}


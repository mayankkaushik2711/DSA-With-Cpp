#include<iostream>
using namespace std;

int sort(int arr[],int size){
    for(int i=0 ; i<size-1 ;i++)
    {
        for(int j=0 ; j<size-i-1 ;j++)
        {

            if (arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            
            
        }
    }


}

int main(){
    // int A1size;
    // int A2size;
    // cin>>A1size>>A2size;
    // int array1[A1size];
    // int array2[A2size];

    // for(int i=0 ; i<A1size ;i++){
    //     cin>>array1[i];
    // }

    // for(int i=0 ; i< A2size ; i++){
    //     cin>>array2[i];
    // }

    int array1[4]={4,1,5,2};
    int array2[4]={9,3,8,6};

    // sort(array1,4);
    // sort(array2,4);

    int sum=8;
    int arraysum[sum];

    for (int i = 0; i < sum; i++)
    {
        if (i<4)
        {
            arraysum[i]=array1[i];
        }
        else{
            arraysum[i]=array2[i-4];
        }
    }

    sort(arraysum,sum);

    for(int i=0 ; i<sum ; i++){
        cout<<arraysum[i]<<" ";
    }
    


    
    

}
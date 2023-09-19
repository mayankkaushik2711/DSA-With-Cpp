#include<iostream>
using namespace std;

int isSqrt(int n){
    int start=0;
    int end=n/2;
    int mid=(end+start)/2;

    while (start<=mid)
    {
        if ((mid*mid)==n)
        {
            return mid;
        }
        else if((mid*mid)>n){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=(end+start)/2;
    }

    return mid;
}

int moreprecise(int n,int precision,int tempsol){
    double factor=1;
    double finalans=0;
    for (int i = 0; i < precision; i++)
    {
        factor=factor/10;
        for (int accu = tempsol; accu*accu < n; accu=accu+factor)
        {
            finalans=accu;
        }
        
    }
    return finalans;
    
}


int main(){
    int a=24;
    int tempsol=isSqrt(a);
    cout<<moreprecise(a,3,tempsol);
}
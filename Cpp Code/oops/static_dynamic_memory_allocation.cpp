#include<iostream>
using namespace std;

class hero{
    private:
    int n;
    string s;

    public:
    void getn(){
        cout<<n;
    }

    void gets(){
        cout<<s;
    }

    void setn(int no){
        n=no;
};

int main(){
    
    //static object creation
    hero hulk;

    //dynamic class creation
    hero *ironman = new hero;
    
    string str;
    getline(cin,str);
    (*ironman).sets(str);

    int n;
    cin>>n;
    (*ironman).setn(n);

    (*ironman).gets();
    cout<<endl;
    (*ironman).getn();

}
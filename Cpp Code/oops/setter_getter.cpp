// #include<iostream>
// using namespace std;

// class myclass{
// private:
//     int no;
//     int sq;
// public:

//     // setter..............................
//     void putno(int x){
//         no=x;
//     }

//     void putsq(int y){
//         sq=y;
//     }

//     // getter................................
//     void retno(){
//         cout<<no<<endl;
//     }

//     void retsq(){
//         cout<<sq;
//     }

// };

// int main(){
//     myclass d;
//     d.putno(5);
//     d.putsq(10);
//     d.retno();
//     d.retsq();
// }

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
    }

    void sets(string str){
        s=str;
    }

};

int main(){

    hero hulk;
    
    string str;
    getline(cin,str);
    hulk.sets(str);

    int n;
    cin>>n;
    hulk.setn(n);

    hulk.gets();
    cout<<endl;
    hulk.getn();

}
#include<iostream>
using namespace std;

class car{
    public:
    int no;
    int seq;
    string stri;
};

int main(){
    car kia;

    int n;
    cin>>n;
    cout<<"akka";
    kia.no = n;

    int seq;
    cin>>seq;
    kia.seq = seq;
    
    cin.ignore();

    string str;
    getline(cin,str);
    kia.stri = str;

    cout<<"kia.no "<<kia.no<<endl;
    cout<<"kia.seq "<<kia.seq<<endl;
    cout<<"kia.stri "<<kia.stri;

}




// #include<iostream>
// using namespace std;

// class calculator{
//     private:
//     int a=4;
    
//     int b=4;

//     public:

//     void sum(){
//         cout<<a+b;
//     }

//     void prod(){
//         cout<<a*b;
//     }
// };


// int main(){
//   calculator sumpro;
//   sumpro.sum();
//   sumpro.prod();

// }



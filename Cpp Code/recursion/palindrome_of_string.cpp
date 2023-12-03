#include<iostream>
using namespace std;

//............................self-tried......................

// void call(string str,string &emp,int idx){
//     if(str.size()==idx){
//         return;
//     }
//     call(str,emp,idx+1);
//     emp+=str[idx];
// }

// int main(){
//      string str="jahaj";
//      string emp="";
//      call(str,emp,0);
//      if(str==emp){
//         cout<<"true"<<endl;
//      }
//      else{
//         cout<<"false";
//      }
// }

//.............................clue-taken........................


bool call(string str,int s,int e){
    if(s>=e){
        return true;
    }

    if(str[s]==str[e]){
        return call(str,s+1,e-1);
    }

    return false;
}
int main(){
    string str="jahj";
    cout<<call(str,0,str.size()-1);
}
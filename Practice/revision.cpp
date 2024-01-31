
#include<iostream>
#include<algorithm>
using namespace std;

void vowel(string str,string emp){
    for(int i=0 ; i<str.size() ; i++){
        if(str[i]=='a' || str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u' ){
            emp+=str[i];
        }
    }
    cout<<emp<<" ";
    return;
}

void remove(string str,string ans){
    sort(str.begin(),str.end());
    for(int i=0 ; i<str.size()-1 ; i++){
        if(str[i]!=str[i+1]){
            ans+=str[i];
            
        }
    }
    ans+=str[str.size()-1];
    cout<<ans;
    return;

}

void check(string str1,string str2){
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());
    if(str1==str2){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}
int main(){
    string str="abc";
    string str2="abca";
    vowel(str,"");
    remove(str,"");
    check(str,str2);
}


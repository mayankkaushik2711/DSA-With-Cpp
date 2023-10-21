int main(){
    string str;
    getline(cin,str);


    for(int i = 0 ; str[i] != '\0' ; i++){
        for(int j = i ; str[j] != '\0' ; j++ ){
            cout<<str[j];
        }
        cout<<endl;
    }
}
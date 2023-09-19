// #include<iostream>
// using namespace std;
// int main()
// {
// int a;
// cin>> a;

// int c=0;
// while (a>0)
// {
//     int b=a%10;
//     c=(c*10)+b;
//    a=a/10;
   
// }

// cout<<c;

// }


// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"enter no of elements"<<endl;
//     int a;
//     int b;
//     cin>>a;
//     cin>>b;
//     int array[a][b];
//     for (int i = 0; i < a; i++)
//     {
//         for (int  j = 0; j < b; j++)
//         {
//             cin>>array[i][j];
//         }
        
        
//     }

//     for (int i = 0; i < a; i++)
//     {
//         for (int j = 0; j < b; j++)
//         {
//             cout<<array[i][j];
//         }
//         cout<<endl;
       
        
//     } 
    
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cin>>a;
    
//     int sum=0;
//     for(int i=0;i<=a;i++){
//        int rem = a%10;
//        sum=sum*10+rem;
//        a=a/10;
//     }
//     cout<<sum;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     int m=n;
//     cin>>m;

//     int mask=0;
//     while(m!=0){
//         mask=(mask<<1) | 1;
//         m=m>>1;
//     }

//     int ans=(~n) & mask;
//     cout<<ans;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cin>>a;
//     int pow=1;
//     for(int i=1;i<=a;i++){
//          pow=2*pow;
//         if(pow==a){
//             cout<<"true";
//         }
        
        
//     }
   
//     }


// #include<iostream>
// using namespace std;

// int combi(int n,int r){
//     int factn=1;
//     for (int i = n; i > 0; i--)
//     {
//         factn=factn*i;
//     }
//     // cout<<factn;

//     int factr=1;
//     for (int j = r; j > 0; j--)
//     {
//         factr=factr*j;
//     }
//     // cout<<factr;

//     int factnr=1;
//     for (int k = (n-r); k > 0; k--)
//     {
//         factnr=factnr*k;
//     }

//     int answer=factn/(factr * factnr);
//     //  cout<<answer;
//      return answer;
// }

// int main(){
//     int n,r;
//     cin >> n >> r ;
//     int ans=combi(n,r);
//     cout<<ans;
// }
                                                //    ncr
// #include<iostream>
// using namespace std;

// int fact(int num){
//     int facto=1;
//     for (int i = 1; i <= num; i++)
//     {
//         facto=facto*i;
//     }

//     return facto;
    
// }

// int ncr(int n,int r){
//     int num=fact(n);
//     int dino=fact(r) * fact(n-r);
//     int ans=num/dino;

//     return ans;
// }

// int main(){
//     int n,r;
//     cin>>n>>r;
//     int answer=ncr(n,r);
//     cout<<answer;
// }
                                                //  isPrime
// #include<iostream>
// using namespace std;

// bool isPrime(int n){
//     for (int i = 2; i < n; i++)
//     {
//         int check=n%i;

//         if(check==0){
//             return false;
//         }

//         else
//         {
//             return true;
//         }
        
//     }
    
// }

// int main(){
//     int n;
//     cin>>n;
//     cout<<isPrime(n);
// }



// #include <iostream>

// using namespace std;

// int main()
// {

//         int a = 3;
//         int d = 7;
//         int n;
//         cin >> n;
//         for (int i = 1; i < n; i++)
//         {
//                 int b = a + (i * d);
//                 cout << b << " ";
//         }
// }/

#include<iostream>
using namespace std;

 int countSetBits(int n)
    {
        
        int count=0;
        for(int i=1; i<=n; i++)
        {
            while(i!=0){
                if(i&1==1){
                    count+=1;
                     }
                i=i>>1;
            }
        }
        return count;
    }
    
    int main(){
        int N;
        cin>>N;
        cout<<countSetBits(N);
    }
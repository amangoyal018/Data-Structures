#include<iostream>
#include<cmath>
using namespace std;

// int fib(int n){
//     // if(n==0){
//     //     return 0;
//     // }else if(n==1){
//     //     return 1;
//     // }else{
//     //     return (fib(n-1) + fib(n-2))%1000000007;
//     // }
//     int a=0,b=1,c,i;
//     if (n==0){
//         return a;}
//     if(n==1){
//         return b;}    
//     for(i=2;i<=n;i++){
//         c=(a+b)%1000000007;
//         a=b;
//         b=c;

//     }
//     return c;
    


// }

int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    int nth;
    cin>>nth;
    
    // cout<<fib(nth);
    cout<<"1 1 ";
    int a=1;
    int b=1;
    int c;
    for(int i=2;i<nth;i++){
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }

}            
#include<bits/stdc++.h>
using namespace std;



int fib(int x){
    if(x<=1){
        return x;
    }else{
        return (fib(x-1) + fib(x-2));
    }
}


int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif


    ios_base::sync_with_stdio(false);
    cin.tie(NULL);



    int n;
    cin>>n;
    cout<<fib(n);
    return 0;
}            
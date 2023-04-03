#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;

    int digits=log10(n)+1;   //counting number of digits

    int reverse=0;
    int ncopy=n;
    for(int i=0;i<digits;i++){
        int a=ncopy%10;
        reverse=reverse*10+a;
        ncopy/=10;
        
    }
    // cout<<reverse;
    
    if(reverse==n){
        cout<<"yes";
    }else{
        cout<<"no";
    }

    
    
}
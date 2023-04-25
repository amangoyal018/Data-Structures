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

    // int count=0;

    // while(n>0){
    //     if(n&1){
    //         count++;

    //     }
    //     n=n>>1;
    // }
    // if(count>1){
    //     cout<<"no";
    // }else{
    //     cout<<"yes";
    // }


    //efficient
    if(n==0){
        cout<<"no";

    }else{
        cout<<((n&n-1)==0);

    }

    

}
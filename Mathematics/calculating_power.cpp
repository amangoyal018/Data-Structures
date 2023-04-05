#include <bits/stdc++.h>
using namespace std;

int smain()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    // long long int a,b;
    // cin>>a>>b;
    // // to calculate a to the power b
    // // my approach
    // long long int ans=1;
    // for(int i=1;i<=b;i++){
    //     ans*=a;
        
    // }
    // cout<<ans;


    //efficient Approach

    int x,n;
    cin>>x>>n;

    int ans=1;
    while(n>0){
        if(n&1){
            ans*=x;

        }
        x*=x;
        n/=2;
    }
    cout<<ans;

    

    
    
}
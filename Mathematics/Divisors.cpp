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
    // for(int i=1;i<=n;i++){
    //     if(n%i==0){
    //         cout<<i<<" ";
    //     }
    // }


    //0(rootn)
    // for(int i=1;i*i<=n;i++){
    //     if(n%i==0){
    //         cout<<i<<" ";
    //         if(i!=(n/i)){
    //             cout<<(n/i)<<" ";
    //         }
    //     }
    // }
    

    //efficient aPProach
    int i;
    for(i=1;i*i<n;i++){
        // cout<<i<<endl;
        if(n%i==0){
            // cout<<i<<endl;
            cout<<i<<" ";
        }
    }
    // cout<<i;
    for( ;i>=1;i--){
        if(n%i==0){
            // cout<<i<<endl; 
            cout<<n/i<<" ";
        }
    }
    
}
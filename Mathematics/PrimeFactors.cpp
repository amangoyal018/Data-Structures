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
    cin >> n;

    // if(n<=1){
    //     cout<<"No Factors";
    // }

    // for(int i=2;i*i<=n;i++){
    //     while(n%i==0){
    //         cout<<i<<" ";
    //         n/=i;
    //     }
    // }

    // if(n>1){          //in case of prime numbers
    //     cout<<n;
    // }

    // more efficient approach

    if (n <= 1) return 0;
    while(n%2==0){
        cout<<2<<" ";
        n/=2;
    }
    while(n%3==0){
        cout<<3<<" ";
        n/=3;
    }

    for(int i=5;i*i<=n;i+=6){
        while(n%i==0){
        cout<<i<<" ";
        n/=i;
        }
        while(n%(i+2)==0){
        cout<<i+2<<" ";
        n/=(i+2);
        }
        
    }
    if(n>3){
        cout<<n;
    }
}
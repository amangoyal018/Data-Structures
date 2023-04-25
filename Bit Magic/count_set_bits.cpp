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
    int count=0;
    bool b=true;

    while(b){
        if(n==0){
            b=false;
            continue;
        }
        if(n&1){
            count++;
        }
        n=n>>1;
        // cout<<n;
    }
    cout<<count;

    

}
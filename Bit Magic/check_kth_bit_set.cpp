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

    int n,k;
    cin>>n>>k;
    int a=(1<<k-1);

    if(a&n){
        cout<<"yes";
    }else{
        cout<<"no";
    }

    

}
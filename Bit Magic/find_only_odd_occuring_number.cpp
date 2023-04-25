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

    vector<int> v;

    for(int i=0;i<n;i++){
        int a;
        cin>>a;

        v.push_back(a);
    }
    int ans=0;
    for(auto x:v){
        ans=(ans^x);
    }
    cout<<ans;
    
    

}
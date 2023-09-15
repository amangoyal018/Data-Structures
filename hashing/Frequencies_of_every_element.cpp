#include<bits/stdc++.h>
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



    unordered_map<int,int> m;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        m[a]++;
    }
    for(auto x : m){
        cout<<x.first<<" "<<x.second<<"\n";
    }
    
    
}
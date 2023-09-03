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

    vector<pair<int,int>> v;

    for(int i=0;i<n;i++){
        int a;
        int b;
        cin>>a>>b;
        pair<int,int> p = {a,b};
        v.push_back(p);
    }
    sort(v.begin(),v.end());
    // for(auto x:v){
    //     cout<<x.first<<" "<<x.second<<endl; 
    // }
    pair<int,int> p=v[0];

    vector<pair<int,int>> ans;

    for(int i=1;i<n;i++){
        if(v[i].first<=p.second){
            p.second=max(v[i].second,p.second);
        }else{
            ans.push_back(p);
            p=v[i];
        }
        
    }
    ans.push_back(p);

    for(auto x:ans){
        cout<<x.first<<" "<<x.second<<endl;
    }

    

    

}
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


    string S;
    cin>>S;

    vector<int> v(26,0);
    

    for(int i=S.size()-1;i>=0;i--){
        if(v[S[i]-'a']>0){
            v[S[i]-'a']=-1;
        }else if (v[S[i]-'a']==0){
            v[S[i]-'a']=i+1;
            
        }
    }
    int ans = INT_MAX;
    for(int i=0;i<26;i++){
        if(v[i]<=0){
            continue;
        }
        ans=min(v[i],ans);
    }
    // cout<<ans<<"\n";
    if(ans==INT_MAX){
        cout<<-1;
    }else{
        cout<<ans-1;
    }
    
    

    
    

    

    

    
    
}
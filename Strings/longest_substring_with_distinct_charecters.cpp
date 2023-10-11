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

    int n = S.size();
    vector<int> v(26,0);

    int cnt=0;
    int ans = 0;

    for(int i=0;i<n;i++){
        if(v[S[i]-'a']>0){
            if(v[S[i]-'a']<i-cnt){
                v[S[i]-'a']=i+1;
                cnt++;
            }else{
                cnt = i - v[S[i]-'a'] + 1;
                v[S[i]-'a']=i+1;
            }
        }else{
            v[S[i]-'a']=i+1;
            cnt++;

        }
        ans = max(ans,cnt);
        // cout<<cnt<<"\n";
    }
    cout<<ans;
    

    

    

    
    
}
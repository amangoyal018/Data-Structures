#include<bits/stdc++.h>
using namespace std;


int factorial(int n){
    if(n==1){
        return 1;
    }
    return n*factorial(n-1);
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;

    int n = s.size();

    vector<int> v(26,0);
    for(int i=0;i<n;i++){
        v[s[i]-'a']++;

    }
    for(int i=1;i<26;i++){
        v[i]+=v[i-1];
    }
    // for(auto x:v){
    //     cout<<x<<" ";
    // }

    int ans = 0;
    // cout<<v['s'-'a'];

    for(int i=0;i<n-1;i++){
        int char_cnt = v[s[i]-'a'] - 1;
        int rem_places = n-i-1;
        ans+= char_cnt*(factorial(rem_places));

        for(int j=int(s[i]-'a');j<26;j++){
            v[j]--;
        }
        
        
    }
    cout<<ans+1;
    
    
    

    

    

    
    
}
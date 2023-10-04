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


    string s;
    cin>>s;

    vector<int> v(26,0);

    int ans = -1;

    for(int i=s.length()-1;i>=0;i--){
        v[s[i]-'a']++;
        if(v[s[i]-'a']>1){ 
            ans = i;
        }

    }
    cout<<ans;

    
    

    

    

    
    
}
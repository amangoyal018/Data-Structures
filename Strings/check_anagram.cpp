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

    string s1,s2;
    cin>>s1>>s2;

    vector<int> v(26,0);

    for(int i=0;i<s1.length();i++)
    {
        v[s1[i]-'a']++;
        v[s2[i]-'a']--;
    }
    bool ans = false;
    for(auto x:v){
        if(x==0){
            continue;
        }else{
            cout<<"NO";
            ans =true;
            break;
        }
    }
    if(!ans){
        cout<<"YES";
    }
    
    

    

    

    
    
}
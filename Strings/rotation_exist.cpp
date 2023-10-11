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

    if(s1.length()!=s2.length()){
        cout<<"NO\n";
        return 0;
    }

    s1+=s1;
    if(s1.find(s2)!=string::npos){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
    
    

    

    

    
    
}
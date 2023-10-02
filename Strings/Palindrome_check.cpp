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

    int n = s.length();
    for(int i = 0; i < n/2; i++){
        if(s[i]!=s[n-i-1]){
            cout<<"NO";
            break;
        }
        if(i==n/2-1){
            cout<<"YES";
        }
    }

    

    

    
    
}
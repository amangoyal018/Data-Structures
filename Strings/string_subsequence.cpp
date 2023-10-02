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

    string s2;
    cin>>s2;

    int n = s.length();

    int index=0;
    if(s2.length()==0){
        cout<<"YES";
        return 0;
    }
    for(int i=0;i<n;i++){
        if(s[i]==s2[index]){
            index++;
        }
        if(index==s2.length()){
            cout<<"YES";
            break;
        }
        if(i==n-1){
            cout<<"NO";
        }
    }

}
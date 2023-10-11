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

    int n = s.size();

    int i=1;
    int len = 0;

    vector<int> lps(n,0);

    while(i<n){

        if(s[i]==s[len]){
            lps[i]=len+1;
            len++;
            i++;
        }else{
            if(len==0){
                lps[i]=0;
                i++;
            }else{
                // cout<<"h";   
                len=lps[len-1];
            }
        }


    }
    for(auto x:lps){
        cout<<x<<" ";
    }

    
    

    

    

    
    
}

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

    vector<int> lps(n,0);

    // cout<<lps.size()<<endl;

    int start = 0;
    int end;

    for(int i=0;i<n;i++){  
        // if(i!=5){
        //     continue;
        // }
        end = i;
        string prefix = "";
        string suffix = "";
        for(int j = start; j<end;j++){
            prefix+=s[j];
            suffix = s[end - j] + suffix;  
            // cout<<prefix<<" "<<suffix<<endl;
            if(prefix==suffix){
                lps[i]=prefix.size();
            }
        }


    }
    for(auto x : lps){
        cout<<x<<" ";
    }


    

    

    
    
}
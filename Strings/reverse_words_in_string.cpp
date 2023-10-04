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
    getline(cin,s);

    //not optimized requires o(n) extra auxillary space.
    
    // vector<string> v;
    // string temp = "";
    // for(int i=0;i<s.size();i++){
    //     if(s[i]!=' '){
    //         temp+=s[i];
    //     }else{
    //         v.push_back(temp);
    //         temp="";
    //     }
    // }
    // v.push_back(temp);

    // for(int i = v.size()-1;i>=0;i--){
    //     cout<<v[i]<<" ";
    // }

    int a=0,b=-1;

    for(int i=0;i<s.size();i++){
        if(s[i]!=' '){
            b++;
        }else{
            // cout<<a<<" "<<b<<" ";
            for(int j=a;j<=((b+a)/2);j++){
                swap(s[j],s[b+a-j]);    
            }
            // cout<<s<<endl;
            a=i+1;
            b=i;
            
        }
    }
    // cout<<a<<" "<<b<<" ";
    for(int j=a;j<=(b+a)/2;j++){
        swap(s[j],s[b+a-j]);    
    }
    for(int i = 0 ;i<=s.size()/2;i++){
        swap(s[i],s[(s.size()-i-1)]);
        
    }
    cout<<s<<endl;


    

    

    
    
}
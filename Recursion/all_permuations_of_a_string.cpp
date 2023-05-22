#include <bits/stdc++.h>
using namespace std;

void allsubsets(string s,int i=0){

    if(i==(s.length()-1)){cout<<s<<" ";}

    for(int j=i;j<s.length();j++){
        swap(s[i],s[j]);
        allsubsets(s,i+1);
        swap(s[i],s[j]);
        
    }
}





int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s="ABCD";
    int n=s.length();
    
    allsubsets(s);
}
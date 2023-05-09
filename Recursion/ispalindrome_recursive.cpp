#include <bits/stdc++.h>
using namespace std;

bool ispalindrome(string s,int start,int end){

    if(start>=end){
        return true;
    }

    return s[start]==s[end] and ispalindrome(s,start+1,end-1);

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
    int n=s.length();
    // cout<<n;

    cout<<ispalindrome(s,0,n-1);

    


    

}
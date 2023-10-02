#include<bits/stdc++.h>
using namespace std;



bool string_subsequence(string s1,string s2,int n1,int n2){

    if(n2==0){
        return true;
    }
    if(n1==0){
        return false;
    }
    if(s1[n1-1]==s2[n2-1]){
        return string_subsequence(s1,s2,n1-1,n2-1);
    }else{
        return string_subsequence(s1,s2,n1-1,n2);
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

    string s1,s2;
    cin>>s1>>s2;



    int n1=s1.length();
    int n2=s2.length();

    
    

    

    

    
    
}
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

    string str,ptrn;
    cin>>str>>ptrn;

    vector<int> v;

    int n = str.size();
    int m = ptrn.size();

    v.push_back((str[0]-'a')+1);

    for(int i=1;i<str.size();i++){
        v.push_back((str[i]-'a')+1+v[i-1]);
    }

    int temp = ptrn[0]-'a'+1;

    for(int i=1;i<m;i++){
        temp+=ptrn[i]-'a'+1;
    }
    

    for(int i = 0 ; i<n-m+1 ; i++){
        
        
    }

    
    

    

    

    
    
}
#include<bits/stdc++.h>
using namespace std;


bool check(vector<int> v1){
    for(auto x:v1){
        if(x==0){
            continue;
        }else{
            return false;
        }
    }
    return true;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string txt,ptrn;
    cin>>txt>>ptrn;

    int n=txt.size();
    int m=ptrn.size();
    vector<int> v1(26,0);


    for(int i=0;i<m;i++){
        v1[txt[i]-'a']--;
        v1[ptrn[i]-'a']++;
        
    }
    if(check(v1)){
        cout<<"YES "<<0;
        return 0;
    }
    for(int i=1;i<n-m+1;i++){

        v1[txt[i-1]-'a']++;
        v1[txt[i+m-1]-'a']--;
        if(check(v1)){
            cout<<"YES "<<i;
            return 0;
        }


    }    
    

    

    

    
    
}
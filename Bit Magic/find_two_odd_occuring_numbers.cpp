#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    int res=0;
    for(auto x:v){
        res=(res^x);
    // }
    }
    int res1=0;
    int res2=0;
    int rightmostsetbit=(res&~(res-1));//to find the righmost set bit
    // cout<<rightmostsetbit;
    for(auto x:v){
        if((x&rightmostsetbit)!=0){
            res1=(res1^x);
        }else{
            res2=(res2^x);
        }
    }
    cout<<res1<<" "<<res2;

    

    

    
}
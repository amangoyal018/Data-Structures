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

    int n1,n2;
    cin>>n1>>n2;

    vector<int> v(2401,0);

    for(int i=0;i<n1;i++){
        int a;
        cin>>a;
        v[a]++;
        
    }
    for(int i=0;i<n2;i++){
        int a;
        cin>>a;
        v[a+1]--;

    }
    // for(int i=0;i<10;i++){
    //     cout<<v[i]<<" ";
    // }
    int ans=v[0];
    int res=0;
    for(int i=1;i<=2359;i++){
        v[i]+=v[i-1];
        // cout<<v[i]<<endl;
        if(v[i]>ans){
            ans=v[i];
            res=i;

        }
    }
    cout<<ans;

    

    

    

}
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


    int n;
    cin>>n;

    int x;
    cin>>x;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    map<int,int> m;

    int ps = 0;
    m[ps]=0;
    
    int ans = 0;

    for(int i=0;i<n;i++){

        ps+=arr[i];

        if(m.count(ps-x)>0)
        {
            ans = max(ans , i+1-m[ps-x]);
            if(m.count(ps)>0){
                continue;
            }
            m[ps]= i+1;

        }else
        {
            if(m.count(ps)>0){
                continue;
            }
            m[ps]=i + 1;
            // break;
        }
        
    }
    for(auto y:m){
        cout<<y.first<<" "<<y.second<<"\n";
    }
    cout<<ans;



    

    
    
}
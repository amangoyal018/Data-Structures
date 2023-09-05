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
    int k;
    cin>>k;

    vector<int> v(n);
    int max1 = INT_MIN;

    for(int i=0;i<n;i++){
        cin>>v[i];
        max1=max(max1,v[i]);
    }
    max1++;

    vector<vector<int>> a(k);

    for(int i=0;i<n;i++){
        int index = max1/k;
        index = v[i]/index;
        a[index].push_back(v[i]);

    }
    for(auto x:a){
        sort(x.begin(),x.end());

    }
    for(auto x:a){
        for(auto y:x){
            cout<<y<<" ";
        }
    }
    






    
    
    

    

    

}
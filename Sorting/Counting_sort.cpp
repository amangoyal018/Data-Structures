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

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> v(k,0);
    for(int i=0;i<n;i++){
        v[arr[i]]++;
    }

    for(int i=1;i<k;i++){
        v[i]+=v[i-1];
    }

    vector <int> ans(n);

    for(int i=n-1;i>=0;i--){
        ans[v[arr[i]]-1] = arr[i];
        v[arr[i]]--;
    }
    for(const auto &x : ans){
        cout << x << " ";
    }


    
    

    

    

}
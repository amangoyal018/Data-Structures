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
    unordered_map<int,int> m;

    unordered_set<int> s;

    for(int i=0;i<n;i++){
        m[arr[i]]++;
        if(m[arr[i]]>n/k){
            s.insert(arr[i]);
        }
    }
    for(auto x:s){
        cout<<x<<" ";
        
    }

    

    

    
    
}
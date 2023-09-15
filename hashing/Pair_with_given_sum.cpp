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

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int x;cin>>x;

    unordered_map<int,int> m;

    bool status = true;

    for(int i=0;i<n;i++){
        int temp = x - arr[i];
        if(m[temp]>0){
            cout<<"Yes";
            status=false;
        }else{
            m[arr[i]]++;
        }
    }

    if(status){
        cout<<"no"<<"\n";
    }


    
    
}
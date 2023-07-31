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
    int k;cin>>k;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    int res=INT_MIN;
    for(int i=0;i<k;i++){
        sum+=arr[i];
    }
    for(int i=k;i<n;i++){
        res=max(sum,res);
        sum+=arr[i];
        sum-=arr[i-k];

        res=max(sum,res);
    }
    cout<<res;

    

}
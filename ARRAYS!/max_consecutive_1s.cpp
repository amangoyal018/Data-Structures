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
        // cout<<arr[i]<<"\n";
    }
    int cnt=0;
    int ans=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            cnt++;
        }else{
            cnt=0;
        }
        // cout<<cnt;
        ans=max(cnt,ans);
    }
    cout<<ans;
    

}
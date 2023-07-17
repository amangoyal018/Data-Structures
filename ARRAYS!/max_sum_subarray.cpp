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
    int sum=0;
    int ans=0;
    for(int i=0;i<n;i++){
        if(arr[i]>=0){
            sum+=arr[i];
        }else{
            sum=0;
        }
        ans=max(ans,sum);
    }
    cout<<ans;
    

}
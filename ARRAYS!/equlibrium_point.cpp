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
    int prefix[n];
    prefix[0]=arr[0];
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]+arr[i];
    }
    int rev_prefix[n];
    rev_prefix[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--){
        rev_prefix[i]=rev_prefix[i+1]+arr[i];
    }
    bool ans=false;
    for(int i=0;i<n;i++){
        if(rev_prefix[i]==prefix[i]){
            ans =true;
        }
    }
    if(ans){
        cout<<"yes";
    }else{
        cout<<"no";
    }
    
    

}
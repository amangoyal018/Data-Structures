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
    int temp=arr[0];
    int cnt=0;
    bool status=true;
    for(int i=1;i<n;i++){
        if(arr[i]!=temp){
            if(status){
                cout<<i<<" ";
                status=false;
            }else{
                cout<<"to " <<i-1<<"\n";
                status=true;
            }
            cnt++;
            temp=arr[i];
        }
    }
    if(!status){
        cout<<"to " <<n-1;
    }
    // cout<<cnt;
    

}
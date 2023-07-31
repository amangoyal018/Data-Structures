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
    

    //                           both working



    // int count=1;
    // int ans=1;
    // for(int i=1;i<n;i++){
    //     bool status1=arr[i-1]%2!=0;//1st odd
    //     bool status2=arr[i]%2==0;//2nd even
    //     // cout<<status1<<" "<<status2<<" ";
    //     int a=(status1^status2);
    //     // cout<<a<<endl;
    //     if(!a){
    //         count++;
    //     }else{
    //         count=1;
    //     }
    //     ans=max(ans,count);

    // }
    // cout<<ans;
    int count=1;
    int ans=1;
    for(int i=1;i<n;i++){
        bool status1=arr[i-1]%2==0;//1st even
        bool status2=arr[i]%2==0;//2nd even
        // int a=(status1^status2);
        if(status1 and !status2){
            count++;
        }else if(!status1 and status2){
            count++;
            
        }else{
            count=1;
        }
        ans=max(ans,count);

    }
    cout<<ans;

    

}
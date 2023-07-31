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
    int sum;cin>>sum;


    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        // cout<<arr[i]<<"\n";
    }
    int temp_sum=arr[0];
    bool ans=false;
    int index=0;
    for(int i=1;i<n;i++){
        while(temp_sum>sum and index<i){
            temp_sum-=arr[index];
            index++;
        }
        if(temp_sum==sum){
            ans=true;
            break;

        }
        temp_sum+=arr[i];
        if(temp_sum==sum){
            ans=true;
            break;
        }
        // cout<<temp_sum<<"\n";
        

    }
    cout<<ans;

    

    

}
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

    int sum=0;
    int max1=INT_MIN;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
        max1=max(max1,arr[i]);

    }
    // cout<<sum;
    // cout<<" "<<max1; 

    int low=max1;
    int high=sum;
    int res=-1;

    while(low<=high){
        int mid=(high+low)/2;
        int cnt=1;
        int temp=0;
        int ans=INT32_MIN;
        for(int i=0;i<n;i++){
            if(temp+arr[i]<=mid){
                temp+=arr[i];
                ans=max(ans,temp);
            }else{
                temp=0;
                temp+=arr[i];
                ans=max(ans,temp);
                cnt++;

            }
            
            
        }
        if(cnt==k){
            high=mid-1;
        }else if(cnt<k){
            high=mid-1;
        }else{
            low=mid+1;
        }
        res=low ;
        // cout<<mid<<" "<<cnt<<endl;
    }
    cout<<res;
    
}
    
    
    

    


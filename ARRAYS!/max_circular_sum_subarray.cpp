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
    int total_sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        total_sum+=arr[i];
        // cout<<arr[i]<<"\n";
    }
    //for normal sum


    int normal_sum=arr[0];
    int temp=arr[0];
    for(int i=1;i<n;i++){
        temp=max(temp+arr[i],arr[i]);
        normal_sum=max(temp,normal_sum);
    }
    

    //for circular sum

    int circular_sum=arr[0];
    temp=arr[0];
    for(int i=1;i<n;i++){
        temp=min(temp+arr[i],arr[i]);
        circular_sum=min(temp,circular_sum);
    }
    // cout<<circular_sum<<endl;
    if(normal_sum<0){
        cout<<normal_sum;
        return 0;
    }
    cout<<max(total_sum-circular_sum,normal_sum);


}
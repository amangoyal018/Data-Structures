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

    int x;
    // cin>>x;
    x=1;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        // cout<<arr[i];
        // cout<<arr[i]<<"\n";
    }
    int low=0;
    int high=n-1;
    int index=(low+high)/2;
    int ans=-1;
    

    while(low<=high){

        index=(low+high)/2;
        if(arr[index]==x){
            if(arr[index-1]==x){
                high=index-1;
                continue;
            }
            ans=index;
            break;


        }else if(arr[index]>x){
            high=index-1;
            // index=(low+high)/2;

        }else if(arr[index]<x){
            low=index+1;
            // index=(low+high)/2;

        }
    }
    if(ans==-1){
        cout<<0;
        return 0;
    }
    cout<<n-ans;
    
    

    

}
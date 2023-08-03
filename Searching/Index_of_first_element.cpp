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
    cin>>x;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        // cout<<arr[i];
        // cout<<arr[i]<<"\n";
    }
    int low=0;
    int high=6;
    int index=(low+high)/2;
    int ans=-1;
    

    while(low<=high){
        if(arr[index]==x){
            ans=index;
            break;


        }else if(arr[index]>x){
            high=index-1;
            index=(low+high)/2;

        }else if(arr[index]<x){
            low=index+1;
            index=(low+high)/2;

        }
    }
    cout<<ans;
    
    

    

}
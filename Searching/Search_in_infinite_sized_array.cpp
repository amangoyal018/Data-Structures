#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int arr[],int x,int low,int high){
    if(low>high){
        return -1;
    }
    int  mid=(high+low)/2;

    if(arr[mid]==x){
        return mid;
    }else if(arr[mid]<x){
        low=mid+1;
        BinarySearch(arr,x,low,high);
    }else{
        high=mid-1;
        BinarySearch(arr,x,low,high);
    }
}

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
    // int low=0;
    // int high=6;
    // int index=(low+high)/2;
    // int ans=-1;
    

    // while(low<=high){
    //     if(arr[index]==x){
    //         ans=index;
    //         break;


    //     }else if(arr[index]>x){
    //         high=index-1;
    //         index=(low+high)/2;

    //     }else if(arr[index]<x){
    //         low=index+1;
    //         index=(low+high)/2;

    //     }
    // }
    // cout<<ans;
    int ans =-1;
    if(arr[0]==x){
        ans=0;
    }
    int i=1;
    while(arr[i]<x){
        i*=2;
        // cout<<i<<"\n";
    }
    ans=BinarySearch(arr,x,i/2+1,i);
    cout<<ans;

    
    

    

}
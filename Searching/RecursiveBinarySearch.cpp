#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int arr[],int n,int x,int low,int high){
    if(low>high){
        return -1;
    }
    int  mid=(high+low)/2;

    if(arr[mid]==x){
        return mid;
    }else if(arr[mid]<x){
        low=mid+1;
        BinarySearch(arr,n,x,low,high);
    }else{
        high=mid-1;
        BinarySearch(arr,n,x,low,high);
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
    cout<<BinarySearch(arr,n,x,0,n-1);
    
    

    

}
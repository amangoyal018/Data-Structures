#include<bits/stdc++.h>
using namespace std;


int merge(int arr[],int low,int mid,int high){
    vector<int> temp; //temp array to contain elements from low to high in sorted order
    int left=low;
    int cnt=0;  
    int right=mid+1;

    while(left<=mid and right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }else{
            temp.push_back(arr[right]);
            right++;
            cnt+= (mid-left+1);
        }

    }
    
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
    
    for(int i=low;i<=high;i++){
        arr[i]=temp[i-low];
    }
    return cnt;


}


int mergesort(int arr[],int low,int high){
    int cnt1=0;
    if(low>=high){
        return cnt1;
    }
    int mid = (high + low) / 2 ;
    cnt1 += mergesort(arr,low,mid);
    cnt1 += mergesort(arr,mid+1,high);
    cnt1 += merge(arr,low,mid,high);
    return cnt1;
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

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<mergesort(arr,0,n-1);
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<"\n";
    
    
    

    

}
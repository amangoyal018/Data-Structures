#include<bits/stdc++.h>
using namespace std;

int peak(int nums[],int n){
    int low=0,high=n-1;
    // int i=0;
    while(low<=high){
        // i++;
        int mid=(low+high)/2;
        // cout<<i<<" "<<nums[mid]<<endl;
        if((mid==0 or (nums[mid-1]<=nums[mid])) and  (mid==n-1 or (nums[mid+1]<=nums[mid]))){
            return mid;

        }
        // if((nums[mid-1]<=nums[mid]) and (nums[mid+1]<=nums[mid])){
        //     // cout<<"hello"<<"\n";
        //     return mid;
        //     // break;

        // }
        if(mid>0 and nums[mid]<=nums[mid-1]){
            high=mid-1;
        }else{
            low=mid+1;
        }
        // cout<<high<<endl;
        // break;
    }
    return -1;
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

    

    
    int nums[n];
    for(int i=0;i<n;i++){
        cin>>nums[i];
        
    }
    cout<<peak(nums,n);


    
    

    

}
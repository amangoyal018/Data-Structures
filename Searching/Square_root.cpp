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

    int x;
    cin>>x;

    int low=1;
    int high=x;
    int mid;
    int ans;

    while(low<=high){
        mid=(low+high)/2;
        if(mid*mid==x){
            ans=mid;
            break;
        }
        if(mid*mid<x){
            // if((mid+1)*(mid+1)>x){
            //     break;
            // }
            low=mid+1;
            ans=mid;
            // continue;
        }else{
            high=mid-1;
        }
        // cout<<mid<<"\n";
    }
    // ans=mid;
    cout<<ans;
    
    

    

}
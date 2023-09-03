#include<bits/stdc++.h>
using namespace std;


long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    
    sort(a.begin(),a.end());
    long long ans=INT_MAX;
    for(int i=0;i<=n-m;i++){
        long long left = a[i];
        long long right = a[i+m-1];
        ans=min(ans,right-left);
    }
    return ans;
    
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


    

    

}
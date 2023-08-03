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

    int m;
    cin>>m;

    long long int arr[m]={};
    arr[n-1]=1;
    long long int sum=0,index;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    index=0;
    for(int i=n;i<m;i++){
        arr[i]=sum;
        sum+=arr[i];
        sum-=arr[index];
        index++;
    }



    // int arr[n];
    for(int i=0;i<m;i++){
        // cin>>arr[i];
        cout<<arr[i]<<" ";
    }

    // N bonacci numbers

    

}
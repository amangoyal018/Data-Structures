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
    for(int i=0;i<n;i++){
        cin>>arr[i];
        // cout<<arr[i]<<endl;
    }
    for(int i=0;i<=n/2;i++){
        swap(arr[i],arr[n-i-1]);
        cout<<arr[i]<<endl;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
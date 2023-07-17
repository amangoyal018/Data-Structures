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
        // cout<<arr[i]<<"\n";
    }
    int a=arr[0];
    for(int i=0;i<n;i++){
        if(i==n-1){
            arr[n-1]=a;
            break;
        }
        arr[i]=arr[i+1];
    }
    for(int i=0;i<n;i++){
        // cin>>arr[i];
        cout<<arr[i]<<" ";
    }

}
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
    int min=arr[0];
    int diff=arr[1]-arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
        int a=arr[i]-min;
        if(a>diff){
            diff=a;
        }
    }
    cout<<diff<<"\n";
    

}
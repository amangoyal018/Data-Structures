#include<bits/stdc++.h>
using namespace std;

int duplicate(int *arr,int n){
    int x=0;
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[x]){
            x++;
            arr[x]=arr[i];
        }
    }
    for(int i=0;i<=x;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    return x+1;

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
        // cout<<arr[i]<<"\n";
    }
    cout<<duplicate(arr,n);
    

}
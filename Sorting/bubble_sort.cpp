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
    }
    // cout<<arr[1];

    for(int i=1;i<n;i++){
        bool status=false;
        for(int j=0;j<n-1+(-i+1);j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                status=true;
            }
        }
        if(!status){
            break;
            
        }
        for(int j=0;j<n;j++){
            cout<<arr[j]<<" ";
        }
        cout<<"\n";
    }
    

}
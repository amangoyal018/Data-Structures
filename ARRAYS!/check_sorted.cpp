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
    // int arr1[n];
    // arr1[0]=arr[0];
    // for(int i=1;i<n;i++){
    //     arr1[i]=arr[i]-arr[i-1];
    //     if(arr1[i]<0){
    //         cout<<-1;
    //         return 0;
    //     }
    // }
    // cout<<"yes";
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            cout<<-1;
            return 0;
        }
    }
    cout<<"yes";
    

}
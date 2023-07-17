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
    int temp=arr[0];
    int freq=1;
    for(int i=1;i<n;i++){
        if(temp==arr[i]){
            freq++;
        }else{
            cout<<temp<<" "<<freq<<"\n";
            temp=arr[i];
            freq=1;
        }
    }
    cout<<temp<<" "<<freq;
    

}
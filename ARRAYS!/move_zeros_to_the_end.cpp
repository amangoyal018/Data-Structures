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
    int pos=0;
    for(int i=0;i<n;i++){
        if(arr[i]){
            arr[pos]=arr[i];
            pos++;
            if(pos-1==i){
                continue;
            }
            arr[i]=0;
            // swap(arr[i],arr[pos]);
            // pos++;

        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    

}
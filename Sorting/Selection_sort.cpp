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

    int index=0;
    for(int i=1;i<n;i++){
        int min1=INT_MAX;
        int loc=-1;
        for(int j=index;j<n;j++){
            if(arr[j]<min1){
                min1=arr[j];
                loc=j;
            }
        }
        swap(arr[index],arr[loc]);
        index++;
        
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    

}
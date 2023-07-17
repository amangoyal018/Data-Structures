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
    // int max=-1;
    // for(int i=0;i<n;i++){
    //     arr[i]>max?max=arr[i]:max=max;
    // }
    // int max2=-1;
    // for(int i=0;i<n;i++){
    //     if(arr[i]>max2 and arr[i]<max){
    //         max2=arr[i];
    //     }
    //     // cout<<max2<<endl;
    // }
    // cout<<max2;

    int max1=arr[0],max2=-1;

    for(int i=1;i<n;i++){
        if(arr[i]>max1){
            max2=max1;
            max1=arr[i];
            
        }

    }
    cout<<max2;
    

}
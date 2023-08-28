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

    int l,m,h;
    cin>>l>>m>>h;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //brute force
    // for(int i=m+1;i<=h;i++){
    //     if(arr[i]>=arr[i-1]){
    //         break;
    //     }else{
    //         for(int j=m;j>=l;j--){
    //             if(arr[j+1]<arr[j]){
    //                 swap(arr[j],arr[j+1]);
    //             }
    //         }
    //         m++;
    //     }
    //     for(int i=0;i<n;i++){
    //         cout<<arr[i]<<" ";
    //     }
    // }


    //efficient

    int left[m-l+1];
    int right[h-m];
    for(int i=l;i<=m;i++){
        left[i-l]=arr[i];
        // cout<<left[i-l];
    }
    for(int i=m+1;i<=h;i++){
        right[i-m-1]=arr[i];
        // cout<<right[i-m-1];
    }
    int a=0,b=0;

    for(int i=l;i<=h;i++){
        if(a>m-l){
            a=m-1;
            left[a]=INT_MAX;
        }
        if(b>=h-m){
            b=h-m-1;
            right[b]=INT_MAX;
        }
        if(left[a]>=right[b]){
            arr[i]=right[b];
            b++;
        }else{
            arr[i]=left[a];
            a++;
        }
        

    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    


    

    

}
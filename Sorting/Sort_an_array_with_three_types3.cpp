#include<bits/stdc++.h>
using namespace std;
int lPartition(int  arr[],int l,int h){
    // int pivot = arr[h];  
    // cout<<pivot<<endl;
    int i = l - 1;
    for(int j=l;j<=h;j++){
        if(arr[j]<5){
            i++;
            swap(arr[i],arr[j]);

        }
    }

    // i++;
    // swap(arr[i],arr[h]);

    // for(int i=0;i<=h;i++){
    //     cout<<arr[i]<<" ";
    // }
    return i;

}
int lPartition2(int  arr[],int l,int h){
    // int pivot = arr[h];  
    // cout<<pivot<<endl;
    int i = l - 1;
    for(int j=l;j<h;j++){
        if(arr[j]<=10){
            i++;
            swap(arr[i],arr[j]);

        }
    }

    i++;
    swap(arr[i],arr[h]);

    // for(int i=0;i<=h;i++){
    //     cout<<arr[i]<<" ";
    // }
    return i;

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

    // int pivot;
    // cin>>pivot;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int p = lPartition(arr,0,n-1);
    cout<<p<<endl;
    lPartition2(arr,p+1,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    

    

}
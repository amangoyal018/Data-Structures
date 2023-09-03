#include<bits/stdc++.h>
using namespace std;

int lPartition(int  arr[],int l,int h){
    int pivot = arr[h];  
    // cout<<pivot<<endl;
    int i = l - 1;
    for(int j=l;j<h;j++){
        if(arr[j]<pivot){
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

    int k;
    cin>>k;



    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans;
    int l=0;
    int h=n-1;

    while(true){
        int p = lPartition(arr,l,h);
        // cout<<p<<endl;
        

        if(p>k-1){
            h=p-1;
        }else if(p<k-1){
            l=p+1;
        }else{
            ans=arr[p];
            break;
        }
    }
    cout<<ans;

    

}
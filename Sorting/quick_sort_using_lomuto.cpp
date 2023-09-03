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
void quickSort(int arr[],int l,int h){
    if(l<h){
        int p = lPartition(arr,l,h);
        quickSort(arr,l,p-1);
        quickSort(arr,p+1,h);
    }
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

    // int pos;
    // cin>>pos;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    quickSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    
    

    

}
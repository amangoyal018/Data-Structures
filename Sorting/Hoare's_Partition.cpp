#include<bits/stdc++.h>
using namespace std;


int hPartition(int  arr[],int l,int h){

    int pivot = arr[0];

    int left = l-1;
    int right = h+1;

    while(true){
        do{
            left++;
        }while(arr[left]<pivot);

        do{
            right--;
        }while(arr[right]>pivot);

        if(left>=right){
            return right;
        }
        swap(arr[left],arr[right]);
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

    int pos;
    cin>>pos;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    hPartition(arr,0,n-1);
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }

    
    

    

}
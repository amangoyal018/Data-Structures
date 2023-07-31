#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[],int low,int high){
    while(low<high){
        swap(arr[low],arr[high]);
        low++;
        high--;

    }
}
void rotate(int arr[],int n,int d){
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
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
    int d;
    cin>>d;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        // cout<<arr[i]<<"\n";
    }
    // int temp[d];
    // for(int i=0;i<d;i++){
    //     temp[i]=arr[i];
    // }

    // for(int i=0;i<n-d;i++){
    //     arr[i]=arr[i+d];
    // }
    // int pos=0;
    // for(int i=n-d;i<n;i++){
    //     arr[i]=temp[pos];
    //     pos++;
    // }
    rotate(arr,n,d);





    for(int i=0;i<n;i++){
        // cin>>arr[i];
        cout<<arr[i]<<" ";
    }

}
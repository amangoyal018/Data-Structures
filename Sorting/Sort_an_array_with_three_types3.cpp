#include<bits/stdc++.h>
using namespace std;


int Dutch_national_flag_algorithm(int arr[],int l,int h,int p1,int p2){
    int low=0;
    int mid=0;
    int high=h+1;

    while(mid<high){
        if(arr[mid]<p1){
            swap(arr[mid],arr[low]);
            low++;
            mid++;

        }else if(arr[mid]>=p1 and arr[mid]<=p2){
            mid++;

        }else{
            swap(arr[mid],arr[high-1]);
            high--;

        }
        
        
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
    // partition about a pivot
    int n;
    cin>>n;

    int k1;
    cin>>k1;

    int k2;
    cin>>k2;

    int arr[n]; 
    for(int i=0;i<n;i++){
        cin>>arr[i];
        // cout<<arr[i]<<" ";
    }

    
    // cout<<"\n";
    Dutch_national_flag_algorithm(arr,0,n-1,k1,k2);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    

    

    

}
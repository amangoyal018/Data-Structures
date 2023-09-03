#include<bits/stdc++.h>
using namespace std;


int Dutch_national_flag_algorithm(int arr[],int l,int h){
    int low=0;
    int mid=0;
    int high=h+1;

    while(mid<high){
        if(arr[mid]==0){
            swap(arr[mid],arr[low]);
            low++;
            mid++;

        }else if(arr[mid]==1){
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

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        // cout<<arr[i]<<" ";
    }
    // cout<<"\n";
    Dutch_national_flag_algorithm(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    

    

    

}
#include<bits/stdc++.h>
using namespace std;

int search(int arr[],int n,int x){
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=(high+low)/2;
        if(arr[mid]==x){
            return mid;
        }
        if(arr[low]<arr[mid]){
            if(x>=arr[low] and x<arr[mid]){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }else{
            if(x>arr[mid] and x<=arr[high]){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
    }
    return -1;

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

    int x;
    cin>>x;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    
    

    

}
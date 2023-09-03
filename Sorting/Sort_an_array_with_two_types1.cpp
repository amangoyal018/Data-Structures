#include<bits/stdc++.h>
using namespace std;
void lPartition(int  arr[],int l,int h){
    int pivot = arr[h];  
    // cout<<pivot<<endl;
    int i = l - 1;
    for(int j=l;j<h;j++){
        if(arr[j]==0){
            i++;
            swap(arr[i],arr[j]);

        }
    }

    i++;
    swap(arr[i],arr[h]);


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

    
    int index=-1;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        
    }
    lPartition(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }



    


    

    

}
#include<bits/stdc++.h>
using namespace std;


void Transpose( int * arr[],int n ,int m){
    for(int i=0;i<n;i++){
        for(int j=i;j<m;j++){
            swap(arr[i][j],arr[j][i]);
            // cout<<arr[i][j]<<" "<<arr[j][i]<<"\n";

        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";

        }
        cout<<"\n";
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

    int n,m;
    cin>>n>>m;
    

    int **arr = new int *[n];
    for(int i=0;i<n;i++){
        arr[i] = new int [m];
    }
    // cout<<arr[0][0];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    Transpose(arr,n,m);
    
    
    
    
    
    
    
    
    

}
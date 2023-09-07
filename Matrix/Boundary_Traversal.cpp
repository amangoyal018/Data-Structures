#include<bits/stdc++.h>
using namespace std;


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
            // cout<<arr[i][j];
        }
    }

    for(int i = 0 ; i < n-1; i++){
        if(i!=0){
            cout<<arr[i][m-1]<<" ";
            continue;
        }
        for(int j = 0; j < m;j++){
            cout<<arr[i][j]<<" ";
        }

    }

    for(int i=n-1;i>0;i--){
        if(i!=n-1){
            cout<<arr[i][0]<<" ";
            continue;
        }
        for(int j=m-1;j>=0;j--){
            cout<<arr[i][j]<<" ";
        }
    }
    
    
    
    
    
    
    
    
    

}
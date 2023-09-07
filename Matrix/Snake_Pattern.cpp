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
        }
    } 








    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            // cin>>arr[i][j];
            if(i%2!=0){
                continue;
            }
            cout<<arr[i][j]<<" ";
        }

        for(int j=m-1;j>=0;j--){
            if(i%2==0){
                continue;
            }
            cout<<arr[i][j]<<" ";
        }
    }
    
    
    
    
    
    
    
    
    

}
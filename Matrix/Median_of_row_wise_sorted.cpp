#include<bits/stdc++.h>
using namespace std;


void Transpose( int * arr[],int n ,int m)
{
    for( int i = 0 ; i < n ; i++ )
    {
        for( int j = i ; j<m ; j++ )
        {
            swap( arr[i][j] , arr[j][i] );
        }
    }
}

void Print( int *arr[], int n , int m )
{
    for(int i = 0 ; i < n; i++ )
    {
        for( int j = 0 ; j < m ;j++ )
        {
            cout << arr[i][j] <<" " ;
        }
        cout << "\n" ;
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

    int  n , m;
    cin >> n >> m ;


    int max1 = INT_MIN;
    int min1 = INT_MAX;
    

    int **arr = new int *[n];
    for( int i = 0 ; i < n ; i++ ){
        arr[i] = new int [m];
    }
    for( int i = 0 ; i < n ; i++ ){
        for( int j = 0 ; j < m ; j++){
            cin>>arr[i][j];
            min1 = min( min1 , arr[i][j]);
            max1 = max( max1 , arr[i][j]);
        }
    }
    int medPos = (n*m+1)/2;
    
    while(min1<max1){
        int mid = (min1 + max1)/2;
        int midPos = 0;
        for(int i=0;i<n;i++){
            midPos += upper_bound(arr[i],arr[i]+m,mid) - arr[i];

        }
        // cout << midPos;
        if(midPos<medPos){
            min1 = mid+1;

        }else{
            max1 = mid;
        }
        
    }
    cout<<min1;


    
    
    
    
    
    
    
    
    

}
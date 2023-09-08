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


    int **arr = new int *[n];

    for( int i = 0 ; i < n ; i++ )
    {
        arr[i] = new int [m];
    }


    for( int i = 0 ; i < n ; i++ )
    {
        for( int j = 0 ; j < m ; j++)
        {
            cin >> arr[i][j] ;
        }
    }

    int x ;
    cin >> x;

    //initialy selecting top right element in the 2d array
    int r = 0;
    int c = m-1;

    vector < int > v;


    while( r < n and c > -1){
        if( x == arr[r][c] )
        {
            v.push_back(r);

            v.push_back(c);

            break;
        }

        if( x > arr[r][c]){
            r++;
        }else{
            c--;
        }

    }
    if( v.size() == 0 )
    {
        v.push_back(-1);
    }
    for( auto y : v )
    {
        cout << y << " " ;
    }


    
    
    
    
    
    
    
    
    

}
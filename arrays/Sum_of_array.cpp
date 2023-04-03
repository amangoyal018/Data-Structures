#include<bits/stdc++.h>
using namespace std;



int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif


    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x;
    cin>>x;
    int arr[x];
    for(int i=0;i<x;i++){
        cin>>arr[i];

    }
    int sum=0;
    for(int y:arr){
        sum+=y;
    }
    cout<<sum;
    
    
    return 0;
    

}            
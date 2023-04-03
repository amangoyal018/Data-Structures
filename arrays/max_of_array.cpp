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
    int max;
    for(int i=0;i<x;i++){
        if(i==0){
            max=arr[i];
        }else{
            if(arr[i]>max){
                max=arr[i];
            }
        }

        
    }
    cout<<max;
    
    
    return 0;
    

}            
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
    int count=0;
    for(int i=0;i<x;i++){
        int s=0;
        for(int k=0;k<i;k++){
            if(arr[i]==arr[k]){
                s++;

            }else{
                continue;
            }

        }
        if(s==0){
            count++;
        }

    }
    cout<<count;
    
    

}            
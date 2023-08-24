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

    int n1,n2;
    cin>>n1>>n2;

    
    int arr1[n1];
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
        
    }
    int arr2[n2];
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
        // cout<<arr2[i];
    }

    int a=0,b=0;
    for(int i=0;i<n1+n2;i++){
        // cout<<"hello ";
        if(a>=n1){
            a=n1-1;
            arr1[a]=INT_MAX;
        }
        if(b>=n1){
            b=n1-1;
            arr2[b]=INT_MAX;
        }
        if(arr1[a]>=arr2[b]){
            cout<<arr2[b]<<" ";
            b++;
        }else{
            cout<<arr1[a]<<" ";
            a++;
        }
    }

    

}
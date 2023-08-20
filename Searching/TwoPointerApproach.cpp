#include<bits/stdc++.h>
using namespace std;

vector<int> isPair(int arr[],int n,int x){
    vector<int> v;
    int a=0;
    int b=n-1;
    while(a<b){
        if(arr[a]+arr[b]==x){
            v.push_back(a);
            v.push_back(b);
            return v;
        }else if(arr[a]+arr[b]<x){
            a++;
        }else{
            b--;
        }
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

    int n;
    cin>>n;
    int x;
    cin>>x;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> v=isPair(arr,n,x);
    
    for(auto x:v){
        cout<<x<<" ";
    }
    
    

    

}
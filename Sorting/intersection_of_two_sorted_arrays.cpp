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

    int n1;
    cin>>n1;

    int arr1[n1];
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    int n2;
    cin>>n2;

    int arr2[n2];
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
    int a=0,b=0;

    while(a<n1 and b<n2){
        if(arr1[a]<arr2[b]){
            a++;
        }else if(arr1[a]>arr2[b]){
            b++;
        }else{
            int temp=arr1[a];
            cout<<temp<<" ";
            while(arr1[a]==temp){
                a++;
            }
            while(arr2[b]==temp){
                b++;
            }
        }
    }
    

    

}
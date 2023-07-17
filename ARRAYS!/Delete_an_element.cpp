#include<bits/stdc++.h>
using namespace std;

int deletea(int arr[],int n,int x){
    int i;
    for(i=0;i<n;i++){
        if(arr[i]==x){
            break;
        }
    }
    if(i==n){
        return n;
    }
    for(int j=i;j<=n-2;j++){
        arr[j]=arr[j+1];
    }
    return n-1;
}



int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[5]={1,2,3,4,5};
    cout<<deletea(arr,5,3);//returns the size of the array after deletion
    

}
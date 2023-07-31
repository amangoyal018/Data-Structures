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

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        // cout<<arr[i]<<"\n";
    }
    int res=0,cnt=1;
    for(int i=1;i<n;i++){
        if(arr[i]==arr[res]){
            cnt++;

        }else{
            cnt--;
        }
        if(cnt==0){
            res=i;
            cnt=1;
        }
    }
    cnt=0;
    for(int i=0;i<n;i++){
        if(arr[res]==arr[i]){
            cnt++;
        }
    }
    if(cnt>n/2){
        cout<<res;
    }else{
        cout<<-1;
    }
    

} 
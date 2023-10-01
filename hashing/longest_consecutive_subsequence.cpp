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
    }

    unordered_set<int> s;

    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }

    int ans =0;
    for(int i=0;i<n;i++){
        if(s.count(arr[i]-1)>0){
            continue;
        }else{

            int j = 0;
            while(s.count(arr[i]+j)>0){
                j++;
            }
            ans=max(ans,j);
        }
    
    }
    cout<<ans;



    

    

    
    
}
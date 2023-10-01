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
    int k;
    cin>>k;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    unordered_map<int,int> m;
    for(int i=0;i<k;i++){
        m[arr[i]]++;
    }
    cout<<m.size()<<" ";
    for(int i=0;i<n-k;i++){
        
        if(m[arr[i]]==1){
            m.erase(arr[i]);
        }else{
            m[arr[i]]--;
        }
        m[arr[i+k]]++;
        cout<<m.size()<<" ";
            
    }



    

    

    
    
}
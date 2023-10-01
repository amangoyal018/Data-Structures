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

    int k;
    cin>>k;     
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    unordered_map<int,int> m;

    for(int i=0;i<n;i++){
        // if(i>=2){
        //     continue;
        // }
        if(m.count(arr[i])>0){
            m[arr[i]]++;
        }else if(m.size()<k-1){
            m[arr[i]]=1;

        }else{
            for (auto j = m.begin(); j != m.end(); j++){
                if(j->second==1){
                    m.erase(i);
                }else{
                    j->second--;
                }
            }
        }
        // cout<<i<<"\n";
        
    }
    for(auto x:m){
        if(x.second>n/k){
            cout<<x.first<<" ";
        }
    }

    

    

    
    
}
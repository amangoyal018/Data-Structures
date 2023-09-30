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

    int x;
    cin>>x;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    unordered_set<int> s;
    bool ans = false;
    int ps = 0; //prefix sum
    s.insert(ps);
    for(int i=0;i<n;i++){
        // cout<<ps<<'\n';
        ps+=arr[i];
        // cout<<s.count()
        if(s.count(ps-x)>0){
            cout<<"YES";
            break;
        }else{
            s.insert(ps);
        }
    }
    

    

    
    
}
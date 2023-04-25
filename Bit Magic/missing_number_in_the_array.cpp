#include <bits/stdc++.h>
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

    vector<int> v;

    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    // logic is that i will take xor of these numbers and xor of 1 to n+1 
    // and then the given numbers will be occuring twice and i will be left with the missing number

    int ans=0;

    for(int i=1;i<=n+1;i++){
        ans=(ans^i);
        
    }
    for(auto x:v){
        ans=(ans^x);
    }
    cout<<ans;

    

}
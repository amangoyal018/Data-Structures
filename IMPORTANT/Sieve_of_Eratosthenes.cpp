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

    vector<int> v(n+1,1);

    v[1]=0;

    for(int i=1;i<=n;i++){
        if(v[i]==1){
            for(int j=i*i;j<=n;j+=i){
                v[j]=0;

            }
        }
    }

    for(int i=1;i<=n;i++){
        if(v[i]==1){
            cout<<i<<" ";
        }
    }



    
    
}
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

    int cnt2=0,cnt5=0;

    int n_copy=n;

    //jus calculating only power of 5 we can do it also
    while(n_copy){
        cnt2+=floor(n_copy/2);
        n_copy/=2;
    }
    n_copy=n;
    while(n_copy){
        cnt5+=floor(n_copy/5);
        n_copy/=5;
    }
    // cout<<cnt5;
    cout<<min(cnt2,cnt5);

    

    
    
}
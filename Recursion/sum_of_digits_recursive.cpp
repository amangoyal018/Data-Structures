#include <bits/stdc++.h>
using namespace std;
int sumofdigits(int n){
    if(n==0){
        return 0;
    }
    return n%10 + sumofdigits(n/10);
}



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
    cout<<sumofdigits(n);
    
    


    

}
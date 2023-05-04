#include <bits/stdc++.h>
using namespace std;

void fun(int n){
    if(n==0){
        return;
    }
    fun(n-1);
    cout<<n<<" ";
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

    fun(n);


    

}
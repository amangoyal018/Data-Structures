#include <bits/stdc++.h>
using namespace std;


int jos(int n,int k){

    if(n==1){
        return 0;
    }
    return (jos(n-1,k) + k)%n;
}



int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cout<<jos(4,3);
    
    


    

}
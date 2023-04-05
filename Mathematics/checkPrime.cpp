#include <bits/stdc++.h>
using namespace std;




bool isPrime(int n){
    if(n==1){
        return false;
    }
    if(n==2 or n==3){
        return true;

    }
    if(n%2==0 or n%3==0){
        return false;

    }
    for(int i=5;i*i<=n;i+=6){        //due to the fact that leaving 2 and 3 all the other
        if(n%i==0 or n%(i+2)==0){    //prime numbers are of type "6n-1" or "6n+1"
            return false;
        }
    }
    return true;
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
    cout<<isPrime(n);

    
    
}
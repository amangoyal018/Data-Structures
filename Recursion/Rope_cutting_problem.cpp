#include <bits/stdc++.h>
using namespace std;

int maxpieces(int n,int a,int b,int c){

    if(n==0){
        return 0;
    }
    if(n<0){
        return -1;
    }


    int ans=max(maxpieces(n-a,a,b,c),max(maxpieces(n-b,a,b,c),maxpieces(n-c,a,b,c)));

    if(ans==-1){
        return -1;
    
    }
    return ans+1;

}



int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,a,b,c;
    cin>>n>>a>>b>>c;

    cout<<maxpieces(n,a,b,c);
    
    


    

}
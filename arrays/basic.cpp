#include<bits/stdc++.h>
using namespace std;
int fun(int n){
    if(n==1){
        return 1;
    }else{
        return (n+fun(n-1));
    }
}






int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif


    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    cout<<fun(n);


    
    return 0;
    

}            
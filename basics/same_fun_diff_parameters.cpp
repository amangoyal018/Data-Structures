#include<bits/stdc++.h>
using namespace std;
int getmax(int x,int y){
    return max(x,y);
}
int getmax(int x,int y,int z){
    return (getmax(z,getmax(x,y)));
}


int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif


    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<getmax(10,12,13);
    

    
    return 0;
    

}            
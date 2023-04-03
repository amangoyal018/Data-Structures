#include<bits/stdc++.h>
using namespace std;
int check_lucky(int n1, int n2){
    if(n1+n2>0&&(n1+n2)%2==0){
        return 1;
    }else{
        return 0;
    }
}



int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif


    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x;
    int y;
    int z;
    cin>>x>>y>>z;
    if(check_lucky(x,y)==1||check_lucky(y,z)==1||check_lucky(z,x)==1){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    


    
    return 0;
    

}            
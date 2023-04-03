#include<bits/stdc++.h>
using namespace std;



int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif


    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    int pcount=0;



    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<3;j++){
            int a;
            cin>>a;
            if(a==1){
                count++;
            }

        }
        if(count>=2){
            pcount++;
        }
    }
    cout<<pcount;
    
    
    return 0;
    

}            
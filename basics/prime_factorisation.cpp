#include<bits/stdc++.h>
using namespace std;
int check_prime(int num){
    int count=0;
    for(int i=2;i<num;i++){
        if(num%i==0){
            count+=1;

        }
    }
    if(count==0){
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
    // int x;
    // cin>>x;
    // for(int i=2;i<=x;i++){

    //     int copyi=i;
    //     if(check_prime(i)==1){
    //         // cout<<i<<endl;
            
                
    //         while(x%copyi==0){

    //             cout<<i<<" ";
    //             copyi=copyi*i;
                

    //         }
        
            
    //     }
    //     else{
            
            
    //         continue;
    //     }
    // }
    // int x;
    // cin>>x;
    // int s=0;
    // while(x>0){
    //     s++;
    //     x/=10;

    // }
    // cout<<s;
    int x,y;
    cin>>x>>y;
    int s=0;
    for(int i=2;i<=max(x,y);i++){
        if(x%i==0 && y%i==0){
            s=i;
            // cout<<i<<" ";
        }
    }
    cout<<s;
    
    










    
    return 0;
    

}            
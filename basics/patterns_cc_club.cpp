#include<bits/stdc++.h>
using namespace std;


int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    int rows;
    cin>>rows;
    // int coloumns;
    // cin>>coloumns;
    for(int i=1;i<=rows;i++){
        for(int k=1;k<i;k++){
            cout<<" ";

            // if(i==1||i==rows||k==1||k==i){
            //     cout<<"*";
            // }else{
            //     cout<<" ";
            // }
            
        }
        for(int j=rows;j>=i;j--){
            cout<<"*";
            
        }
        for(int k=rows;k>i;k--){
            cout<<"*";
        }




        cout<<"\n";
    }
        
    
    for(int i=1;i<=(rows-1);i++){
        for(int k=rows;k>i+1;k--){
            cout<<" ";
        }
        for(int k=1;k<=i+1;k++){
            cout<<"*";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<"\n";
        

    }
    
    
    
    
}            
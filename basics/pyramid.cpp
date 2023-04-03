#include<iostream>
using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    int n;
    cin>>n;

    // for(int i=n;i>0;i--){
    //     for(int k=1;k<i;k++){
    //         cout<<" ";
    //     }
    //     for(int j=i;j<=n;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    //}
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i+j<n+1){
                cout<<"  ";

            }else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }

        
        
    
}
           
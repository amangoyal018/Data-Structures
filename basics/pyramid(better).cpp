#include<iostream>
using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){

        for(int k=1;k<=n;k++){
            if (k<=n-i){
                cout<<"  ";
            
            }else{
                cout<<"* ";
            }
        }
        
        
        cout<<endl;
        
        
    }
}
           
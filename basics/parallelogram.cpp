#include<iostream>
using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    int n;
    cin>>n;

    for(int i=n;i>0;i--){
        for(int j=1;j<i;j++){
            cout<<" ";
        }



        for(int j=1;j<=n;j++){
            cout<<"* ";
            
        }
        cout<<endl;
    }
}            
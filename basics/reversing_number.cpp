#include<iostream>
#include<math.h>
#include<cmath>

using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int n;
    cin>>n;
    int a=n;
    int lastdigit;
    int armstrong=0;

    

    while(n>0){
        lastdigit=n%10;
        armstrong+=round(pow(lastdigit,3));
        cout<<armstrong;
    
        n=n/10;
    }
    if(armstrong==a){
        cout<<armstrong<<" is a armstrong";

    }else{
        cout<<"not armstrong";
    }
    


}            
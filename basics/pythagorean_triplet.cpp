#include<bits/stdc++.h>
using namespace std;
// int maxof3num(int a)

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    int a,b,c,x,y,z,l,m,n;
    cin>>a>>b>>c;
    // cout<<a;
    x=max(a,max(b,c));



    if (a==x){
        y=b;
        z=c;

    }else if(b==x){
        y=a;
        z=c;
    }else if(c==x){
        y=a;
        z=b;

    }

    l=pow(x,2);
    m=pow(y,2);
    n=pow(z,2);
    // cout<<l<<m<<n;

    if (l==m+n){
        cout<<"this is pythagoreran triplet"<<endl;

    }else{
        cout<<"not a pythagorean triplet"<<endl;
    }

    
}
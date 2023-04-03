#include<bits/stdc++.h>
#include<typeinfo>
using namespace std;


int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    auto a=10;
    auto b=15.5;
    cout<<typeid(a).name()<<"\n";
    cout<<typeid(b).name();

}            
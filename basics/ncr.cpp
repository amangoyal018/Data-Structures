#include<iostream>
#include<cmath>
using namespace std;
int factorial(int num){
    // if (num==0){
    //     return 1;
    // }else{                                              //using recursion
    //     return (num*factorial(num-1));
    // }
    int s=1;
    for(int i=2;i<=num;i++){
        s=s*i;                                             //using iterattion

    }
    return s;
}

int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    int n,r;
    cin>>n>>r;
    int a=factorial(n);
    int b=factorial(r);
    int c=factorial(n-r);

    cout<<a/(b*c);



}            
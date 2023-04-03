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
        s=s*i;                                             //using iteration

    }
    return s;
}
int ncr(int num1,int num2){
    return(factorial(num1)/(factorial(num2)*factorial(num1-num2)));
}

int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    int n;
    cin>>n;
    for(int j=0;j<n;j++){
        for(int l=1;l<=n-j-1;l++){
            cout<<" ";

        }
        for(int k=0;k<=j;k++){
            cout<<ncr(j,k)<<" ";

        }
        cout<<endl;
    }


}            
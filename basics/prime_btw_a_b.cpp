#include<iostream>
#include<cmath>
using namespace std;

int tocheckprime(int num){
    int s=0;
    for(int i=2;i<num;i++){
        if(num%i==0){
            s++;
        }
    }
    if(s==0){
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
    int x=0;
    int a,b;
    cin>>a>>b;
    for(int j=a+1;j<b;j++){
        if (tocheckprime(j)==1){
            x++;
            cout<<j<<" ";
            if(x%5==0){                //to print only 5 number in one line
                cout<<endl;
            }
        }
    }
}            
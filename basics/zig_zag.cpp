#include<iostream>
using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    int n;
    cin>>n;

    int a=3;
    int b=1;


    for(int i=1;i<=3;i++){

        for(int j=1;j<=n;j++){

            if(i==1){
                if(a==j){
                    cout<<"* ";
                    a+=4;
                }else{
                    cout<<"  ";
                }
            }else if(i==2){

                if(j%2==0){
                    cout<<"* ";
                    
                }else{
                    cout<<"  ";
                }
            }else{

                if(b==j){
                    cout<<"* ";
                    b+=4;
                }else{
                    cout<<"  ";
                }

            }
            
        }
        cout<<endl;

    }
}            
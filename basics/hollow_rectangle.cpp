#include<iostream>
using namespace std;

int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    int rows;
    int coloumns;

    cin>>rows>>coloumns;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=coloumns;j++){
            // if(i<rows && i>1){
            //     if(j>1 && j<coloumns){
            //         cout<<" ";

            //     }
            //     else{
            //         cout<<"*";
            //     }
            // }
            if (i==1 || i==rows || j==1 || j==coloumns){
                cout<<"*";
            }

                
            
            else{
                cout<<" ";
            }
            
            
        
        }
        cout<<endl;
    }

    

}            
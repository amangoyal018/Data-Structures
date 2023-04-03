#include<bits/stdc++.h>
using namespace std;


int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif


    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // int arr[2][3];
    // C{
    //     for(int j=0;j<3;j++){
    //         cin>>arr[i][j];
    //     }
    // }
    // for (int i=0;i<2;i++){
    //     for(int j=0;j<3;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    // cout<<endl;   

    int arr[10];
    int sum1=0;
    for (int i=0;i<10;i++){
        cin>>arr[i];
        }
    for (int i=0;i<10;i+=2){
        sum1+=arr[i];

        
        }
    cout<<sum1;

    
}
    
    

    
       
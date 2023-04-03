#include<bits/stdc++.h>
#include <string.h>
using namespace std;//sum using recursion
int sumofn(int n ){
    static int x=0;
    if(n<=1){
        x+=n;
        return x;

    }else{
        x+=n;
        sumofn(n-1);

        
    return x;
    }
}


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

    // int arr[10];
    // int sum1=0;
    // for (int i=0;i<10;i++){
    //     cin>>arr[i];
    //     if (i%2!=0){
    //         sum1+=arr[i];
    //     }
    //     }
    // for (int i=0;i<10;i+=2){
    //     sum1+=arr[i];

        
     // }
    // cout<<sum1;
    // char arr[6]="Hello";
    // int regno[1];
    // cin>>regno[1];
    // cin.ignore();
    // char name[14];
    // cin.getline(name,14);
    // cout<<regno[1]<<endl;
    // cout<<name<<endl;
    // return 0;

    // char str1[]="amanb";
    // cout<<strlen(str1);
    // string s="aman";
    // cout<<s.size();


    char name[4];
    for(int i=0;i<4;i++){
        cin>>name[i];
    }
    for(int i=3;i>=0;i--){
        cout<<name[i];
    }



    
}

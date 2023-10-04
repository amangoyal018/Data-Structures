#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str,ptrn;
    cin>>str>>ptrn;

    int n = str.size();
    int m = ptrn.size();



    // int temp = ptrn[0]-'a'+1;

    // for(int i=1;i<m;i++){
    //     temp+=ptrn[i]-'a'+1;
    // }
    // int val = str[0]-'a'+1;
    // for(int i=1;i<m;i++){
    //     val+=str[i]-'a'+1;
    // }
    // cout<<val;
    

    // for(int i = 0 ; i<n-m+1 ; i++){
    //     if(i!=0){
    //         val+=str[i+m-1]-'a'+1;
    //         val-=str[i-1]-'a'+1;
    //     }
    //     // cout<<val<<"\n";
        
    //     if(temp==val){
    //         // cout<<i<<endl;
    //         for(int j=0;j<m;j++){
    //             if(str[i+j]!=ptrn[j]){
    //                 break;
    //             }
    //             if(j==m-1){
    //                 cout<<i<<" ";
    //             }
    //         }
    //     }
    // }



    // better hash function 
    // d^m-1*ptrn[0]+d^m-2*ptrn[0]....d^0*ptrn[m-1]
    int d;
    d=5;

    int temp = 0;

    for(int i=0;i<m;i++){
        temp+=round(pow(d,m-i-1))*(ptrn[i]-'a'+1);
    }
    

    int val=0;
    for(int i=0;i<m;i++){
        val+= round(pow(d,m-i-1))*(str[i]-'a'+1);
    }
    // cout<<val;

    for(int i = 0 ; i<n-m+1 ; i++){
        if(i!=0){
            val-=(str[i-1]-'a'+1)*round(pow(d,m-1));
            val*=d;
            val+= str[i+m-1]-'a'+1;
        }
        // cout<<val<<"\n";
        
        if(temp==val){
            // cout<<i<<endl;
            for(int j=0;j<m;j++){
                if(str[i+j]!=ptrn[j]){
                    break;
                }
                if(j==m-1){
                    cout<<i<<" ";
                }
            }
        }
    }

    
    

    

    

    
    
}
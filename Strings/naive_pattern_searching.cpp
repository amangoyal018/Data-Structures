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


    for(int i = 0 ; i<n-m+1 ; i++){
        for(int j=0;j<m;j++){

            // cout<<ptrn[j]<<" "<<str[j+i]<<endl;
            if(ptrn[j]!=str[j+i]){
                break;
            }
            if(j==m-1){
                cout<<i<<" ";
            }
        }
        // cout<<i<<" ";
    }

    
    

    

    

    
    
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s="abc";//time complexity 2^n * n
    int len=s.length();
    int loop=round(pow(2,len))-1;
    for(int i=0;i<=loop;i++){

        for(int j=0;j<len;j++){
            if((i&(1<<j))!=0){
                cout<<s[j];
            }
        }
            cout<<"\n";
        
            
    }
}

    


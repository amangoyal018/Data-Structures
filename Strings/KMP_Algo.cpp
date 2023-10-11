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


    string txt;
    string ptrn;

    cin>>txt>>ptrn;

    int n=txt.size();
    int m=ptrn.size();

    vector<int> lps(m,0);
    int len = 0;
    int i=1;


    while(i<m){
        if(ptrn[i]==ptrn[len]){
            len++;
            lps[i]=len;
            i++;
        }else{
            if(len==0){
                lps[i]=0;
                i++;
            }else{
                len=lps[len-1];
            }
        }

    }
    int p1 = 0;
    int p2 = 0;

    while(p1<n){
        if(txt[p1]==ptrn[p2]){
            p1++;
            p2++;
        }else{
            if(p2==0){
                p1++;
            }else{
                p2=lps[p2-1];
            }
        }

        if(p2==m){
            cout<<p1-p2<<" ";
            p2=lps[p2-1];
        }
    }

    
    

    

    

    
    
}
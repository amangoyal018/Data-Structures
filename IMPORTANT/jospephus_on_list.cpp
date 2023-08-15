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

    list<int> l;
    int n=7;

    int k=3;
    for(int i=0;i<n;i++){
        l.push_back(i);
    }

    auto it=l.begin();
    while(l.size()>1){
        for(int i=1;i<k;i++){
            it++;
            if(it==l.end()){
                it=l.begin();
            }

        }
        it=l.erase(it);
        if(it==l.end()){
            it=l.begin();
        }
    }
    cout<< l.front();

    
    
    

    

}
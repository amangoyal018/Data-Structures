#include<bits/stdc++.h>
using namespace std;

bool sortbysec(const pair<string,int> &a,
                const pair<string,int> &b)
{
    return (a.second < b.second);
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);                             
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<pair<string,int>> v;
    for(int i=0;i<4;i++){
        string s;
        cin>>s;
        int a;
        cin>>a;
        pair<string,int> p={s,a};
        v.push_back(p);
    }
    sort(v.begin(),v.end(),sortbysec);
    for(auto x:v){
        cout<<x.first<<" "<<x.second<<"\n";
    }
    

}
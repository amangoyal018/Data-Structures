#include<bits/stdc++.h>
using namespace std;

void insert(vector<vector<int>> &v, int x){
    int temp = x % 7;
    v[temp].push_back(x);
}
bool search(vector<vector<int>> &v, int x){
    int temp = x%7;

    for(auto y : v[temp]){
        // cout<<y;
        if(x==y){
            return true;
        }

    }
    return false;
}
void delete_(vector<vector<int>> &v, int x){
    int temp = x%7;
    int index = 0;

    for(auto y : v[temp]){
        if(x==y){
            v[temp].erase(v[temp].begin()+index);
            // cout<<v.size()<<"\n";
            return ;
        }
        index++;
    }
    return;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    n=7;

    vector<vector<int>> v(n);
    insert(v,70);
    insert(v,71);
    insert(v,9);
    insert(v,56);
    insert(v,72);

    delete_(v,70);

    for(auto x:v){
        for(auto y:x){
            cout<<y;
        }
        cout<<"\n";
    }

    


    
    
}
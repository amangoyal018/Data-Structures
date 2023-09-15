#include<bits/stdc++.h>
using namespace std;

void Insert(vector<int> &v,int x){
    int index = x%7;
    while(v[index]>0){
        index++;
        if(index>6){
            index=0;
        }
    }
    v[index] = x;
}

bool search_(vector<int> &v,int x){
    int index = x%7;
    // cout<<index<<endl;
    int temp = index;
    while(v[index]!=x){
        // cout<<index<<endl;
        if(index+1==temp){
            index++;
            break;
        }
        index++;
        if(index>6){
            index=0;
        }
    }
    if(v[index]!=x){
        return false;
    }else{
        return true;
    }
}
void delete_(vector<int> &v,int x){
    int index = x%7;
    // cout<<index<<endl;
    int temp = index;
    while(v[index]!=x){
        // cout<<index<<endl;
        if(index+1==temp){
            index++;
            break;
        }
        index++;
        if(index>6){
            index=0;
        }
    }
    if(v[index]==x){
        v[index]=-1;
    }
}



int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    vector<int> v(7);

    Insert(v,48);
    Insert(v,42);
    Insert(v,50);
    Insert(v,55);
    Insert(v,53);
    // Insert(v,19);


    for(auto x:v){
        cout<<x<<" ";
    }
    cout<<"\n";
    cout<<search_(v,54);
    
    
}
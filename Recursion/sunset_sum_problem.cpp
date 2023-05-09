#include <bits/stdc++.h>
using namespace std;


//doubt 
void subsets(vector<int> v,vector<int> v1,int i,int sum){

    // for(auto x:v1){
    //     cout<<x;
    // }
    if(i==v.size()){
        int tempsum=0;
        for(auto x:v1){
            tempsum+=x;
        }
        if(tempsum==sum){
            for(auto x:v1){
                if(x){

                    cout<<x<<" ";
                }
            }
            cout<<endl;
        }

    }
    subsets(v,v1,i+1,sum);
    for(auto x:v1){
        cout<<x<<endl;
    }
    
    v1.push_back(v[i]);
    for(auto x:v1){
        cout<<x<<endl;
    }
    subsets(v,v1,i+1,sum);
    i++;

}


int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> v={10,5,2,3,6};

    // for(auto x:v){
    //     cout<<x<<endl;
    // }
    vector<int> v1;
    int sum=8;
    int i=0;
    subsets(v,v1,i,sum);

    
    
    


    

}
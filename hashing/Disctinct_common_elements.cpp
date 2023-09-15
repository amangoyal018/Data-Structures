#include<bits/stdc++.h>
using namespace std;
#define f(i,a,b) for(int i=a;i<b;i++)

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int n1,n2;cin>>n1>>n2;

    int arr1[n1];
    int arr2[n2];
    unordered_map<int,int> m;
    int cnt=0;
    f(i,0,n1){
        cin>>arr1[i];
        m[arr1[i]]++;
    }
    f(i,0,n2){
        cin>>arr2[i];
        if(m[arr2[i]]>0){
            cnt++;
            m[arr2[i]]=0;
        }
    }
    cout<<cnt;

}
#include<bits/stdc++.h>
using namespace std;

void CS(vector<int> &v,int n,int d){
    vector<int> a(10);
    for(int i=0;i<n;i++){
        int x = v[i]/round(pow(10,d));
        x%=10;
        a[x]++;
    }
    for(int i=1;i<10;i++){
        a[i]+=a[i-1]; 
    }
    vector<int> ans(n);
    for(int i=n-1;i>=0;i--){
        int temp = v[i]/round(pow(10,d));
        temp%=10;
        ans[a[temp]-1] = v[i];
        a[temp]--;
    }
    v=ans;
        

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
    cin>>n;

    vector<int> v(n);
    int max1 = INT_MIN;

    for(int i=0;i<n;i++){
        cin >> v[i];
        max1 = max(max1 , v[i]);
    }
    int digits = floor(log10(max1)+1);

    for(int i=0;i<digits;i++){
        CS(v,n,i);
    }
    for(auto x : v){
        cout << x << " ";
    }


}
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

    int n;
    cin>>n;
    // bool ans =false;

    int arr1[n];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
        // cout<<arr[i]<<"\n";
    }
    int arr2[n];
    for(int i=0;i<n;i++){
        cin>>arr2[i];
        // cout<<arr[i]<<"\n";
    }
    vector<int> v(1001);
    for(int i=0;i<n;i++){

        v[arr1[i]]++;
        v[arr2[i]+1]--;
    }
    int prefix[1001];
    prefix[0]=0;
    int max=-1;
    int index=-1;
    for(int i=1;i<1001;i++){
        prefix[i]=prefix[i-1]+v[i];
        if(prefix[i]>max){
            max=prefix[i];
            index=i;
        }
    }
    cout<<index;
    

    

}
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
    bool ans =false;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        // cout<<arr[i]<<"\n";
    }
    // long long n=arr.size();
    long long sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        if(sum%3==0){
            long long temp=sum/3;
            int cnt=0;
            long long res=0;
            for(int i=0;i<n;i++){
                if(cnt>=3 and arr[i]==0){
                    continue;
                }
                if(cnt>=3 and sum==0){
                    continue;
                }
                res+=arr[i];
                if(res==temp){
                    cnt++;
                    res=0;
                }
            }
            if(cnt>=3){
                return true;
            }else{
                return false;
            }

        }else{
            return false;
        }
    

}
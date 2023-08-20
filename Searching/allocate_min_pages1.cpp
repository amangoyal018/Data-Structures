#include<bits/stdc++.h>
using namespace std;

vector<int> min_pages(int *arr ,int n,int k){
    


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

    int k;
    cin>>k;
    int arr[n];

    int sum=0;
    int max1=INT_MIN;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
        max1=max(max1,arr[i]);

    }
    for(int i=max1;i<=sum;i++){
        // cout<<i<<endl;
        int cnt=1;
        int temp=0;
        int max2=INT32_MIN;
        for(int j=0;j<n;j++){
            if(arr[j]+temp<=i){
                temp+=arr[j];
                max2=max(max2,temp);
                // cnt++;
                
            }else{
                temp=0;
                temp+=arr[j];
                max2=max(max2,temp);
                cnt++;


            }
        }
        if(cnt==k){
            cout<<max2;
            break;
        }

    }
    
    
    

    

}
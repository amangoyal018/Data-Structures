#include<bits/stdc++.h>
using namespace std;

double getMed(int arr1[],int arr2[],int n1,int n2){
    int begin1=0;
    int end1=n1;
    while(begin1<=end1){
        int i1=(begin1+end1)/2;
        int i2=(n1+n2+1)/2-i1;

        int min1=i1==n1?INT32_MAX:arr1[i1];
        int max1=i1==0?INT_MIN:arr1[i1-1];

        int min2=i2==n2?INT32_MAX:arr2[i2];
        int max2=i2==0?INT_MIN:arr2[i2-1];


        if(max1<=min2 and max2<=min1){
            if((n1+n2)%2==0){
                return ((double)max(max1,max2)+min(min1,min2))/2;
            }else{
                return (double)(max(max1,max2));
            }
        }else if(max1>min2){
            end1=i1-1;

        }else{
            begin1=i1+1;
        }
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

    int n1;
    cin>>n1;
    int arr1[n1];
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    int n2;
    cin>>n2;
    int arr2[n2];
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
    cout<<getMed(arr1,arr2,n1,n2);
    
    

    

}
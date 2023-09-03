#include<bits/stdc++.h>
using namespace std;


int Dutch_national_flag_algorithm(int arr[],int l,int h){
    int low=-1;
    int mid=-1;
    int high=-1;
    for(int i=0;i<=h;i++){
        if(arr[i]==0){
            low++;
            mid++;
            high++;
            swap(arr[i],arr[low]);
        }
        if(arr[i]==1){

            mid++;
            high++;
            swap(arr[i],arr[mid]);
        }
        if(arr[i]==2){
            high++;
            swap(arr[i],arr[high]);
        }
        cout<<low<<mid<<high<<endl;
        if(i==3){
            break;
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

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Dutch_national_flag_algorithm(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    

    

    

}
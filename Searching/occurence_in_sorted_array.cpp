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

    int x;
    cin>>x;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        // cout<<arr[i];
        // cout<<arr[i]<<"\n";
    }
    int low1=0;
    int high1=n-1;
    int index1=(low1+high1)/2;
    int ans1=-1;
    

    while(low1<=high1){

        index1=(low1+high1)/2;
        if(arr[index1]==x){
            if(arr[index1+1]==x){
                low1=index1+1;
                continue;
            }
            ans1=index1;
            break;


        }else if(arr[index1]>x){
            high1=index1-1;
            // index1=(low1+high1)/2;

        }else if(arr[index1]<x){
            low1=index1+1;
            // index2=(low2+high1)/2;

        }
    }
    int low2=0;
    int high2=n-1;
    int index2=(low2+high2)/2;
    int ans2=-1;
    // cout<<index1<<"\n";
    

    while(low2<=high2){

        index2=(low2+high2)/2;
        if(arr[index2]==x){
            if(arr[index2-1]==x){
                high2=index2-1;
                continue;
            }
            ans2=index2;
            break;


        }else if(arr[index2]>x){
            high2=index2-1;
            // index2=(low2+high2)/2;

        }else if(arr[index2]<x){
            low2=index2+1;
            // index2=(low2+high2)/2;

        }
    }
    if(ans1==-1){
        cout<<-1;
    }else{
        cout<<index1-index2+1;
    }
    
    

    

}
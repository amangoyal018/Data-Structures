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

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // int temp=arr[0];
    // int swaps=0;

    // for(int i=0;i<n;i++){
    //     int temp=arr[i];
    //     int index=i;
    //     while(true){
    //         int cnt=0;
    //         for(int i=0;i<n;i++){
    //             if(arr[i]<=arr[index]){
    //                 cnt++;
    //             }
    //         }
    //         cnt--;
    //         // cout<<cnt<<"\n";
    //         if(cnt==0){
    //             break;
    //         }
    //         if(index==cnt){
    //             break;
    //         }
    //         swap(arr[index],arr[cnt]);
    //         swaps++;
    //         // break;
    //     }
    //     // break;
        
        

    // }
    // cout<<swaps<<"\n";
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }


    //efficient


    for(int cs=0;cs<n;cs++){
        int temp = arr[cs];
        int pos = cs;
        for(int i=cs+1;i<n;i++){
            if(arr[i]<temp){
                pos++;
            }
        }
        swap(temp,arr[pos]);
        // cout<<temp<<endl;
        while(pos!=cs){
            pos=cs;
            // cout<<temp<<endl;
            for(int i=cs+1;i<n;i++){
                if(arr[i]<temp){
                    // cout<<1<<endl;
                    pos++;
                }
            }
            // cout<<pos<<endl;
            swap(temp,arr[pos]);
        }
        // break;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    

    
    

    

    

}
#include<bits/stdc++.h>
using namespace std;

// triplet with a given sum
// bool isPair(int arr[],int a,int b,int x){
//     int a=0;
//     int b=n-1;
//     while(a<b){
//         if(arr[a]+arr[b]==x){
            
//             return true;
//         }else if(arr[a]+arr[b]<x){
//             a++;
//         }else{
//             b--;
//         }
//     }
//     return false;

// }
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
    }

    bool ans=false;
    vector<int> v;

    for(int i=0;i<n;i++){
        if(ans){
            break;
        }
        int a=i+1;
        int b=n-1;
        int xx=x-arr[i];


        while(a<b){
            if(arr[a]+arr[b]==xx){
                ans =true;
                v.push_back(arr[i]);
                v.push_back(arr[a]);
                v.push_back(arr[b]);
                break;
            }else if(arr[a]+arr[b]<xx){
                a++;
            }else{
                b--;
            }
        }
    }
    for(auto y:v){
        cout<<y<<" ";
    }
    
    

    

}
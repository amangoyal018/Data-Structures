#include<bits/stdc++.h>
using namespace std;




int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[4];
    for(int i=0;i<4;i++){
        cin>>arr[i];

    }
    cout<<"hello";
    int count=1;
    for(int i=0;i<4;i++){
        int s=0;
        for(int k=0;k<i;k++){
            if(arr[i]==arr[k]){
                s++;

            }else{
                continue;
            }

        }
        if(s==0){
            count++;
        }

    }
    cout<<count;
    
    













    return 0;
    

}            
#include<bits/stdc++.h>
using namespace std;

template<typename T>

T arrmax(T arr[],int n){
    T res=arr[0];
    for(int i=1;i<n;i++){
            if(arr[i]>res){
                res=arr[i];

            }
    }
    return res;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    
    
    

    

}
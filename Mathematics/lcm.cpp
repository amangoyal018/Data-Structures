#include <bits/stdc++.h>
using namespace std;
//my approach



// int lcm(int x,int y){
//     int ans;
//     for(int i=max(x,y);x*y;i+=max(x,y)){
//         if(i%x==0 and i%y==0){
//             ans=i;
//             return ans;
//         }

//     }
// }



int gcd(int a,int b){
    // cout<<a;
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
    
}

int lcm(int a,int b){
    return((a*b)/gcd(a,b));
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b;
    cin>>a>>b;
    cout<<lcm(a,b);
    // cout<<gcd(a,b);
    
    
}
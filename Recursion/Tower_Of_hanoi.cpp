#include <bits/stdc++.h>
using namespace std;
void TOH(int n,char a,char b,char c){

    if(n==1){
        cout<<"move 1 from "<<a<<" to "<<c<<"\n";
        return;
    }
    TOH(n-1,a,c,b);
    cout<<"move "<<n<<" from "<<a<<" to "<<c<<"\n";
    TOH(n-1,b,a,c);

}


int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    TOH(10,'a','b','c');
    
    


    

}
#include<bits/stdc++.h>
using namespace std;

template <typename T>

T myMax(T x,T y){
    return (x>y)?x:y;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cout<<myMax<int>(3,7)<<endl;
    cout<<myMax<char>('a','b')<<endl;


    
    
    

    

}
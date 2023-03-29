#include <bits/stdc++.h>
using namespace std;
union Test{
        int x;
        char bin[4];

    };

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    

    
    Test t;
    // t.x=10;
    // cout<<t.x<<" "<<t.y<<endl;
    t.x=512;
    cout<<(int)t.bin[0]<<(int)t.bin[1]<<(int)t.bin[2]<<(int)t.bin[3];
    
    
}
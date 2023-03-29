#include <bits/stdc++.h>
using namespace std;
union Test{
        int x;
        int y;

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
    t.x=10;
    cout<<t.x<<" "<<t.y<<endl;
    t.y=20;
    cout<<t.x<<" "<<t.y<<endl;
    
    
}
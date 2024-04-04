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
    
    deque<int> dq;
    dq.push_front(2);
    dq.push_front(1);
    dq.push_front(2);


    auto i = dq.begin();
    while(i != dq.end()){
        if(*i <= 2 ){
            dq.erase(i);
        }
        i++;
    }
    i = dq.begin();
    while(i != dq.end()){
        cout << *i << " ";
        i++;
    }
   
}
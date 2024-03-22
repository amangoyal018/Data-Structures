#include<bits/stdc++.h>
using namespace std;


void recursive_reverse(queue<int> &q){
    if(q.empty()){
        return ;
    }

    int x = q.front();
    q.pop();
    recursive_reverse(q);
    q.push(x);
}


int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    

    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    // recursive_reverse(q);
    q.front() = 20;
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }





       
    

    
}
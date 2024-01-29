#include<bits/stdc++.h>
using namespace std;


struct MyStack
{
    vector<int> v; 
    void push(int x)
    {   
        v.push_back(x);
    }
    int pop()
    {
        int res = v.back();
        v.pop_back();
        return res;
    }
    int peek()
    {   
        return v.back();
    }
    int size()
    {
        return v.size();
    }

    bool isEmpty()
    {
        return v.size()==0;
    }

};


int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    MyStack s;
    // cout<<s.pop()<<"\n";
    // cout<<s.peek()<<"\n";
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    cout<<s.peek()<<"\n";

    
}
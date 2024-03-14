#include<bits/stdc++.h>
using namespace std;
class MinStack {
public:

    stack<int> original;
    stack<int> minimum;
    MinStack() {
        minimum.push(INT_MAX);
    }
    
    void push(int val) {
        original.push(val);
        // cout<<minimum.top();
        if(minimum.top() == INT_MAX or minimum.top() >= val ){
            minimum.push(val);
        }
    }
    
    void pop() {
        
        int temp = original.top();
        if(temp == minimum.top()){
            minimum.pop();
        }
        original.pop();
    }
    
    int top() {
        return original.top();
        cout<<"hello world";
    }
    
    int getMin () {
        return minimum.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */


int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
    

    
}
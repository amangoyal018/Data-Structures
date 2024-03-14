#include<bits/stdc++.h>
using namespace std;
string infixToPostfix(string s) {
    // Your code here
    stack<char> stk;
    
    map<char,int> precedence;
    {
        precedence['('] = 1;
        precedence['+'] = 2;
        precedence['-'] = 2;
        precedence['*'] = 3;
        precedence['/'] = 3;
        precedence['^'] = 4;
        
    }// declared precedences;
    
    string ans = "";
    string operators = "+-/*()^";
    
    for ( auto x : s)
    {
        if(operators.find(x) == string::npos){
            ans+=x;
        }else{
            if( x == '('){
                stk.push('(');
            }else if( x == ')'){
                while(stk.top() != '('){
                    ans += stk.top();
                    stk.pop();
                }
                stk.pop();
            }else{
                if(stk.empty()){
                    stk.push(x);
                }else if(precedence[x] > precedence[stk.top()]){
                    stk.push(x);
                }else{
                    while(!stk.empty() and precedence[x] <= precedence[stk.top()]){
                        ans += stk.top();
                        stk.pop();
                    }
                    stk.push(x);
                }
            }
        }
        
    }
    while(!stk.empty()){
        ans += stk.top();
        stk.pop();
    }
    return ans;
    
    
    
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
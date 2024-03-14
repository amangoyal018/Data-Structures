#include<bits/stdc++.h>
using namespace std;

int evaluatePostfix(string S)
{
    // Your code here
    string op = "+-/*";
    
    stack<int> st;
    
    
    for (auto  x:S){
        if(op.find(x) == string::npos){
            st.push(x-'0');
        }else{
            int ascii = int(x);
            int num2 = st.top();
            st.pop();
            int num1 = st.top();
            st.pop();
            
            
            if(ascii == 42){
                st.push(num1*num2);
            }
            if(ascii == 43){
                st.push(num1+num2);
            }
            if(ascii == 45){
                st.push(num1-num2);
            }
            if(ascii == 47){
                st.push(num1/num2);
            }
            // cout<<st.top()<<"\n";
        }
    }
    return st.top();
        
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
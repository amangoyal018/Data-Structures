#include<bits/stdc++.h>
using namespace std;



bool isValid(string s) {

    stack<int> stack1;
    for(auto x : s){
        int temp = int(x);
        if(temp == 40 or temp == 91 or temp == 123){
            stack1.push(temp);
        }else{
            if(s.empty() == true){
                return false;
            }
            int top = stack1.top();
            if(temp-top == 1 or temp-top == 2){
                stack1.pop();
            }else{
                return false;
            }
        }
    }
    if(stack1.empty() == true){
        return true;
    }else{
        return false;
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cout << isValid("[{}]");
    

    
}
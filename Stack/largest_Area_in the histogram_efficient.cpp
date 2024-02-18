#include<bits/stdc++.h>
using namespace std;


int largestRectangleArea(vector<int>& heights) {
    int n = heights.size();
    stack<int> s;
    int res = 0;

    for(int i=0;i<n;i++){

        while(!s.empty() and heights[s.top()] > heights[i]){
            int temp = s.top();
            s.pop();
            int curr;
            if(s.empty())
            {
                curr = heights[temp] * (i);
            }else
            {
                curr = heights[temp] * (i - s.top()-1);
            }
            res = max ( curr , res);
        }
        s.push(i);
    }
    while(!s.empty())
    {

        int temp = s.top();
        s.pop();
        // int curr = heights[temp] * ( n - temp);
        int curr;
        if(s.empty())
        {
            curr = heights[temp] * (n);
        }else
        {
            curr = heights[temp] * (n - s.top() - 1 );
        }
        res = max (curr , res);
    }
    return res;
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
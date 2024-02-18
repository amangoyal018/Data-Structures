#include<bits/stdc++.h>
using namespace std;
int largestRectangleArea(vector<int>& heights) {
    int n = heights.size();
    // compute these two arrays so that 
    // we can compute the prevMin and nextMin of an 
    // element in O(1) time;
    vector<int> prevMin;
    vector<int> nextMin(n);

    // To store the prev Min element index
    stack <int> s;
    for(int i=0;i<heights.size();i++){
        while(!s.empty() and heights[i] <= heights[s.top()]){
            s.pop();
        }
        if(s.empty()){
            prevMin.push_back(i+1);
        }else{
            prevMin.push_back(i - s.top());
        }
        s.push(i);  
    }

    //To store the nextMin element index
    stack <int> s2;
    for(int i = heights.size() - 1 ; i >= 0 ; i--){
        while(!s2.empty() and heights[i] <= heights[s2.top()]){
            s2.pop();
        }
        if (s2.empty()){
            nextMin[i] = (n-i);
        }else{
            nextMin[i] = (s2.top() - i);
        }
        s2.push(i);  
    }
    int ans = INT_MIN;

    for(int i=0;i<n;i++){
        ans =  max( ans , heights[i]*(nextMin[i]+prevMin[i]-1));
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
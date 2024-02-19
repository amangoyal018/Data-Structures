#include<bits/stdc++.h>
using namespace std;

int maximalRectangle(vector<vector<char>>& matrix) {

    vector<vector<int>> v(matrix.size());

    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[i].size(); j++) {
            v[i].push_back(matrix[i][j] - '0');
            if (i > 0 and v[i][j] != 0) {
                v[i][j] += v[i - 1][j];
            }
        }
    }
    int res = 0;
    for (int i = 0; i < v.size(); i++) {
        stack<int> s;
        int n = v[i].size();

        for (int j = 0; j < v[i].size(); j++) {
            // cout<<i<<"\n";
            while (!s.empty() and v[i][s.top()] >= v[i][j]) {
                int temp = s.top();
                s.pop();
                int curr;
                if (s.empty()) {
                    curr = (v[i][temp]) * (j);
                } else {
                    curr = (v[i][temp]) * (j - s.top() - 1);
                }
                res = max(res, curr);
            }
            s.push(j);
        }
        while (!s.empty()) {
            int temp = s.top();
            s.pop();
            int curr;
            if (s.empty()) {
                curr = (v[i][temp]) * (n);
            } else {
                curr = (v[i][temp]) * (n - s.top() - 1);
            }
            res = max(res, curr);
        }
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
    
    cout << int('1' + '2');
     

    

    
}
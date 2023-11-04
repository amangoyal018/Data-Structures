#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    // bool ans =false;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        // cout<<arr[i]<<"\n";
    }
    for (int i = 0; i < n; i++)
    {
        unordered_map<double, int> m;
        // cout << i + 1 << " ";
        for (int j = i + 1; j < n; j++)
        {
            double temp = arr[i] * arr[i] + arr[j] * arr[j];
            // int temp = arr[i] * arr[i] + arr[j] * arr[j];
            cout << temp << " ";
            temp = sqrt(temp);
            if (m.count(temp))
            {

                // cout << temp << '\n';
                // cout << i << " " << j;
                cout << "YES";
                return 0;
            }
            m[arr[j]] = 1;
        }
        break;
    }
    cout << "NO";
}
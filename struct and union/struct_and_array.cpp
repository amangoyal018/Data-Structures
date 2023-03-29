#include<iostream>
using namespace std;

struct Point
{
    int x;
    int y;
};

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Point p[5];
    for(int i = 0; i < 5; i++)
    {
        p[i].x = i;
        p[i].y = i*10;
    }
    for(int i = 0; i < 5; i ++)
    {
        cout << p[i].x << ' '
            << p[i].y << '\n';
    }
    return 0;
}
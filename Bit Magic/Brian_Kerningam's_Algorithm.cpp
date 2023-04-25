#include <bits/stdc++.h>
using namespace std;

unsigned int countSetBits(int n) 
{ 
        unsigned int count = 0; 
        while (n) { 
            n &= (n - 1); 
            count++; 
        } 
        return count; 
} 

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i = 9; 
	cout << countSetBits(i); 
	return 0;

    

}
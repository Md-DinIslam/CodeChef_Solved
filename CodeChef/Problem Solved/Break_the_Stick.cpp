#include <bits/stdc++.h>
using namespace std;
#define vt vector<int>
#define ll lon long
#define map map<int, int>
#define pr pair<int, int>
#define vtp vector<pair<int, int>>
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        if (x % y == 0)
        {
            cout << "YES" << endl;
        }
        else if (x % 2 == 0 && y % 2 == 0 || y % 2 == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
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
        int l, r;
        cin >> l >> r;
        int cnt = 0;
        for (int i = l; i <= r; i++)
        {
            int temp = i % 10;
            if (temp == 2 || temp == 3 || temp == 9)
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
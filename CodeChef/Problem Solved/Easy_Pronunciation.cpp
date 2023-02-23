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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (cnt >= 4)
            {
                // cout << cnt << endl;
                break;
            }
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            {
                cnt = 0;
            }
            else
            {
                cnt++;
            }
        }
        if (n < 4)
        {
            cout << "YES" << endl;
        }
        else if (cnt >= 4)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}
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
    int ar[4];
    int cnt = 0;
    for (int i = 0; i < 4; i++)
    {
        cin >> ar[i];
        if (ar[i] >= 10)
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}
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
        vt stu(x);
        for (auto &mark : stu)
        {
            cin >> mark;
        }
        sort(stu.begin(), stu.end(), greater<int>());
        if (x == y)
        {
            int ans = *min_element(stu.begin(), stu.end());
            cout << ans - 1 << endl;
        }
        else
        {
            int ans = stu[y - 1];
            cout<<ans - 1<<endl;
        }
    }
    return 0;
}
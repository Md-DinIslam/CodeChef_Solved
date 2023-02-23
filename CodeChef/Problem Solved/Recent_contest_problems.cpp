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
        int s = 0, l = 0;
        for (int i = 0; i < n; i++)
        {
            string str;
            cin >> str;
            // if (str.size() == 0)
            // {
            //     break;
            // }
            if (str == "START38")
            {
                s++;
            }
            else
            {
                l++;
            }
        }
        cout << s << " " << l << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define trace(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007

int32_t main()
{
    MTK;
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        sort(all(v), greater<int>());

        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
                sum += v[i];
            else
            {
                ll x = min(k, (v[i - 1] - v[i]));
                v[i] += x;
                sum -= v[i];
                k -= x;
            }
        }
        // cout << k << ' ';
        cout << sum << '\n';
    }
    return 0;
}
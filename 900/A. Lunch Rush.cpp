#include <bits/stdc++.h>
using namespace std;
#define MTK                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mem(a, b) memset(a, b, sizeof(a))
#define show(x) cout << #x << ' ' << x << endl
#define all(x) (x).begin(), (x).end()
#define ll int long long
#define mod 1000000007

int32_t main()
{
    MTK;
    int n, k;
    cin >> n >> k;

    vector<int> v;
    while (n--)
    {
        int f, t;
        cin >> f >> t;
        if (t <= k)
            v.push_back(f);
        else
        {
            int x = f - (t - k);
            v.push_back(x);
        }
    }
    sort(all(v));
    reverse(all(v));

    // for (auto [x, y] : v)
    //     cout << x << ' ' << y << '\n';

    // if (v.empty())
    //     cout
    //         << another << '\n';
    // else
    cout << v[0] << '\n';
    return 0;
}
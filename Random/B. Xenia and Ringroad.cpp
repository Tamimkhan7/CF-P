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
    int n, m;
    cin >> n >> m;
    vector<int> v(m);
    for (int i = 0; i < m; i++)
        cin >> v[i];
    ll ans = 0, curr = 1;
    for (int i = 0; i < m; i++)
    {
        if (curr <= v[i])
            ans += v[i] - curr;
        else
            ans += n - (curr - v[i]);
        curr = v[i];
    }
    cout << ans << '\n';
    return 0;
}
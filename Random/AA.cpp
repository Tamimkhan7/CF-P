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
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int cnt = 0, sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0 and sum != 0)
            {
                cnt++;
                sum -= 1;
            }
            else if (a[i] >= k)
                sum += a[i];
        }
        cout << cnt << '\n';
    }
    return 0;
}
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

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        sort(all(s));

        string ss = "";
        int i = 1;
        while (!s.empty())
        {
            for (int j = 0; j < (int)s.size(); j++)
            {
                if ((10 - i) <= (s[j] - '0'))
                {
                    ss += s[j];
                    s.erase(s.begin() + j);
                    break;
                }
            }

            i++;
        }
        cout << ss << '\n';
    }
    return 0;
}
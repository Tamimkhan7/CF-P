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
    int a, b, c;
    char x, y;
    cin >> a >> x >> b >> y >> c;
    if (x == '+')
    {
        if (a + b == c)
            cout << "Yes" << '\n';
        else
            cout << a + b << '\n';
    }
    else if (x == '-')
    {
        if (a - b == c)
            cout << "Yes" << '\n';
        else
            cout << a - b << '\n';
    }

    else if (x == '*')
    {
        if (a * b == c)
            cout << "Yes" << '\n';
        else
            cout << a * b << '\n';
    }
    else
    {
        if (a / b == c)
            cout << "Yes" << '\n';
        else
            cout << a / b << '\n';
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        if (x < 4)
            cout << "BRONZE" << endl;
        else if (x > 3 && x < 7)
            cout << "SILVER" << endl;
        else            
        cout << "GOLD" << endl;
    }
}
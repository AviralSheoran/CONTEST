#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        int a, b;
        cin >> a >> b;

        if (b < a)
        {
            cout << "NO" << '\n';
        }
        else
        {
            int diff = b - a;

            string ans = (diff % 3 == 2) ? "NO" : "YES";
            cout << ans << '\n';
        }
    }

    return 0;
}
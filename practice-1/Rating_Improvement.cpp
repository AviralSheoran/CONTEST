#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int x, y;
        cin >> x >> y;

        cout << (y >= x && y <= x + 200 ? "YES\n" : "NO\n");
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int s, c;
        cin >> s >> c;

        if (c >= s)
        {
            cout << 0 << '\n';
        }
        else
        {
            cout << abs((s - c)) << '\n';
        }
    }

    return 0;
}
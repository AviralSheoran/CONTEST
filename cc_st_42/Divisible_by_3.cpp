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
        int c = 0;

        if (a % 3 == 0 || b % 3 == 0)
        {
            cout << 0 << '\n';
        }
        else if (abs((a - b) % 3 == 0))
        {
            cout << 1 << '\n';
        }
        else
        {
            cout << 2 << '\n';
        }
    }

    return 0;
}
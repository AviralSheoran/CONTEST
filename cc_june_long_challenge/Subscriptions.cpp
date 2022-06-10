#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n >> x;

        int left = n % 6;
        int quotient = abs(n / 6);

        if (n <= 6)
        {
            cout << x << '\n';
        }
        else if (left == 0)
        {
            cout << quotient * x << '\n';
        }
        else
        {
            cout << (quotient + 1) * x << '\n';
        }
    }

    return 0;
}
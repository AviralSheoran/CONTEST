#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        if (n % 2 != 0)
        {
            cout << -1 << '\n';
            continue;
        }

        int sum = 0;
        for (int i = 0; i < n; i++)
        {

            sum = sum + a[i];
        }

        sum = abs(sum / 2);
        cout << sum << '\n';
    }

    return 0;
}
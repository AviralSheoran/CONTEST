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
        int sum = n;
        int h1, h2, h3;

        h1 = n / 2;
        sum = n - h1;

        if (n % 2 != 0)
        {
            h2 = sum / 2;
            sum = n - h2;
        }
    }

    return 0;
}
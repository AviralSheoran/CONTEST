#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        int lon = s.size();

        if (lon <= 10)
        {
            cout << s << '\n';
        }
        else
        {
            cout << s[0] << lon - 2 << s[lon - 1] << '\n';
        }
    }

    return 0;
}
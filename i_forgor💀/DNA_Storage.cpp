#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int x;
        string s;
        cin >> x;
        cin >> s;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '0' && s[i + 1] == '0')
            {
                cout << "A" << flush;
                i += 2;
            }
            else if (s[i] == '0' && s[i + 1] == '1')
            {
                cout << "T" << flush;
                i += 2;
            }
            else if (s[i] == '1' && s[i + 1] == '0')
            {
                cout << "C" << flush;
                i += 2;
            }
            else if (s[i] == '1' && s[i + 1] == '1')
            {
                cout << "G" << flush;
            }
            // cout << s.at(i) << endl;
        }
    }
    return 0;
}
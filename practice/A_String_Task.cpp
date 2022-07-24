#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

        string s, u;
    cin >> s;

    int t = s.length();
    // transform(s.begin(), s.end(), s.begin(), ::tolower);

    for (int i = 0; i < t; i++)
    {
        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] != 'A' && s[i] != 'E' && s[i] != 'I' && s[i] != 'O' && s[i] != 'U' && s[i] != 'Y' && s[i] != 'y')
        {
            u += '.';
            u += tolower(s[i]);
        }
    }

    /* t.erase(remove(t.begin(), t.end(), 'a'), t.end());
    t.erase(remove(t.begin(), t.end(), 'e'), t.end());
    t.erase(remove(t.begin(), t.end(), 'i'), t.end());
    t.erase(remove(t.begin(), t.end(), 'o'), t.end());
    t.erase(remove(t.begin(), t.end(), 'u'), t.end()); */

    cout << u;

    return 0;
}
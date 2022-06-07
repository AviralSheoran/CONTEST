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
        vector<int> a;
        vector<int> b;

        for (int i = 1; i <= n; i++)
            a.push_back(i);

        for (int i = 1; i <= n; i++)
            b.push_back(i);

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        while (a[0] != 0)
        {

            for (int i = 0; i < n; i++)
            {
                a[i]--;
            }
            cout << "HELO"
                 << "\n";

            // (a == b) ? break : continue;
        }
        cout << "YO"
             << "\n";

        /*   if (a == b)
          {
              cout << "YES"
                   << "\n";
          }
          else
          {
              cout << "NO"
                   << "\n";
          } */
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int rm, cm;
    cin >> rm >> cm;

    int a, b, c, d;
    cin >> a >> b;
    cin >> c >> d;

    if (rm == 1 && cm == 1)
    {
        cout << a << '\n';
    }
    else if (rm == 1 && cm == 2)
    {
        cout << b << '\n';
    }
    else if (rm == 2 && cm == 1)
    {
        cout << c << '\n';
    }
    else if (rm == 2 && cm == 2)
    {
        cout << d << '\n';
    }
    else
    {
        cout << "yo" << endl;
    }

    return 0;
}

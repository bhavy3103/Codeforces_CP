#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b, c, d, s = 0, p;
        cin >> n >> a >> b >> c >> d;
        if (n * (a + b) >= (c - d) && (n * (a - b) <= (c + d)))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
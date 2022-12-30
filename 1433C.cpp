#include <bits/stdc++.h>
using namespace std;
#define ib_ss (ios_base::sync_with_stdio(false))
#define buff cin.tie(NULL);
#define ll long long int
#define ff(i, a, b) for (ll i = a; i < b; i++)
#define fb(i, a, b) for (ll i = a; i >= b; i--)
#define asc_vs(v) sort(v.begin(), v.end())
#define dsc_vs(v) sort(v.begin(), v.end(), greater<int>())
#define asc_arr(a, n) sort(a, a + n)
#define dsc_arr(a, n) sort(a, a + n, greater<int>())
#define rev_vs(v) reverse(v.begin(), v.end())
#define rev_arr(a) reverse(a, a + n)

int main()
{
    ib_ss;
    buff int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int ct = 0;
        ll p;
        p = accumulate(a, a + n, 0);
        if (p == n)
        {
            cout << -1 << endl;
        }
        else
        {
            for (int i = 1; i < n; i++)
            {

                if (a[i] > a[i - 1] || a[i] > a[i + 1])
                {
                    if (a[i] + 1 > a[i + 2] || a[i] + 1 > a[i - 1])
                        cout << i + 1 << endl;
                    else
                        cout << i << endl;
                    ct++;
                    break;
                }
            }
        }

        // if (ct = 0)
        // cout << -1 << endl;
    }
    return 0;
}
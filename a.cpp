#include <iostream>
#include <bits/stdc++.h>
#define in(a)         \
    for (auto &x : a) \
        cin >> x;
#define rep(i, a, b) for (int i = a; i < b; i++)
#define out(a)       \
    for (auto x : a) \
        cout << x;
#define pb push_back
#define ll long long
#define all(x) x.begin(), x.end()
#define wt    \
    int t;    \
    cin >> t; \
    while (t--)
#define str string
#define vec vector<int>
#define c(a) cout << a
#define precision_set(x, y) cout << fixed << setprecision(x) << y <<
using namespace std;
int main()
{
    ios::sync_with_stdio(false), cin.tie(nullptr);
    wt
    {
        ll a, b, c;
        cin >> a >> b >> c;
        if (a > b)
            cout << "First" << endl;
        else if (b > a)
            cout << "Second" << endl;
        else
        {
            if (c % 2 == 0)
            {
                cout << "Second" << endl;
            }
            else
                cout << "First" << endl;
        }
    }
    return 0;
}
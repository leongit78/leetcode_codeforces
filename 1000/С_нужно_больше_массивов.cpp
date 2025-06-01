#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll
#define nl '\n'
#define sp ' '
#define pb push_back

void solve()
{
    int n; cin >> n;
    int cnt = 1;

    vector<int> a(n);

    for(auto& num : a) cin >> num;

    int start = a[0];

    for(int i = 1; i < n; ++i)
    {
        if(a[i] - start > 1)
        {
            cnt++; 
            start = a[i];
        }
    }

    cout << cnt << nl;
}

signed main()
{
    int t; cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
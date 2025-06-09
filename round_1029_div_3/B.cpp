#include <bits/stdc++.h>

using namespace std;

#define sp ' '
#define nl '\n'
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define all(a) a.begin(), a.end()

void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    a[0] = 1;
    a[n-1] = 2;
    for(int i = 1; i < n-1; i++) a[i] = i+2;

    for(int i = 0; i < n; ++i) cout << a[i] << sp;
        
    cout << nl;
}

int main()
{
    IOS;
    int t; cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
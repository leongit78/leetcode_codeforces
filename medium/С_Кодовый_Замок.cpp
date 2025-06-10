#include <bits/stdc++.h>

using namespace std;

#define sp ' '
#define nl '\n'
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define all(a) a.begin(), a.end()

void solve()
{
    int n; cin >> n;

    if(n % 2 == 0)
    {
        cout << -1 << nl;
        return;
    }

    for(int i = 1; i <= n; ++i)
    {
        if(i%2 != 0) cout << i << sp;   
    }
    for(int i = 2; i < n; ++i) 
    {
        if(i % 2 == 0) cout << i << sp;
    }
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
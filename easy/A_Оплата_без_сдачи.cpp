#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define int ll 
#define nl '\n'
#define sp ' '

void solve()
{
    int a,b,n,s; cin >> a >> b >> n >> s;
    if(a * n + b < s) cout << "NO" << nl;
    else{
        if(s / n * n + b < s) cout << "NO" << nl;
        else cout << "YES" << nl;
    }
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
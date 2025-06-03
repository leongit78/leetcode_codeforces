#include <bits/stdc++.h>

using namespace std;

#define ll long long 
#define int ll
#define nl '\n'
#define sp ' '
#define tb '\t'


void solve()
{
    int a,b,c; cin >> a >> b >> c;
   
    if((a+b+c) % 3 != 0)
    {
        cout << "NO" << nl;
        return;
    }
    int avg = (a + b + c) / 3;

    if(((avg - a) + (avg - b) == c - avg) && (avg - b) >= 0)
    {
        cout << "YES" << nl;
        return;
    }
    else
    {
        cout << "NO" << nl;
        return;
    }
    
}

signed main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
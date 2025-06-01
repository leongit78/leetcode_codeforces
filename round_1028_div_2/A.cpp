#include <bits/stdc++.h>

using namespace std;

#define ll long long 
#define int ll
#define nl '\n'
#define sp ' '

void solve()
{
    int a,b,c,d; cin >> a >> b >> c >>d;
    
    
    if(min(a, c) >= min(b,d)) 
    {
        cout << "Gellyfish" << nl;
        return;
    }
    else{
        cout << "Flower" << nl;
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
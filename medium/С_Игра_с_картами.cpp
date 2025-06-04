#include <bits/stdc++.h>

using namespace std;

#define nl '\n'
#define sp ' '
#define ll long long 
#define int ll

void solve()
{
    int n; cin >> n;
    int cnt_b = 0;
    vector<char> a(n);

    for(int i = 0; i < n; ++i)
    {
        cin >> a[i];
        if(a[i] == 'B') cnt_b++;
    }


    if(a[0] == a[n-1])
    {
        if(a[0] == 'A') cout << "Alice" << nl;
        else cout << "Bob" << nl;
    }
    else{
        if(a[0] == 'A')
        {
            if(cnt_b == 1) cout << "Alice" << nl;
            else cout << "Bob" << nl;
        }
        else{
            if(a[n-2] != 'A') cout << "Bob" << nl;
            else cout << "Alice" << nl;
        }
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
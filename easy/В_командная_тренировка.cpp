#include <bits/stdc++.h>

using namespace std;

#define sp ' '
#define nl '\n'
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define all(a) a.begin(), a.end()

void solve()
{
    int n,x; cin >> n >> x;
    int width = 1, cnt = 0;
    vector<int> a(n);


    for(int i = 0; i < n; ++i) cin >> a[i];


    sort(all(a));
    for(int i = n-1; i >= 0; --i)
    {
        if(width * a[i] >= x)
        {
            cnt++;
            width = 1;
        }
        else {
            width++;
        }
    }

    cout << cnt << nl;
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
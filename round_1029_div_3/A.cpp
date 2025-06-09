#include <bits/stdc++.h>

using namespace std;

#define sp ' '
#define nl '\n'
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define all(a) a.begin(), a.end()

void solve()
{
    int n,x; cin >> n >> x;
    vector<int> a(n);
    int start, stop; 
    for(int i = 0; i < n; ++i) cin >> a[i];

    for(int i = 0; i < n; ++i){
        if(a[i] == 1)
        {
            start = i;
            break;
        }
    }
    for(int i = n-1; i >= 0; --i){
        if(a[i] == 1)
        {
            stop = i;
            break;
        }
    }
    
    if(stop - start + 1 > x) cout << "NO" << nl;
    else cout << "YES" << nl;
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
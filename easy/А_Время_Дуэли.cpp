// Дорешать
#include <bits/stdc++.h>

using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define nl '\n'
#define sp ' '

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    
    for(int i = 0; i < n; ++i) cin >> a[i];
    
    bool has_zero = false;
    for(int i = n-1; i >= 0; i--)
    {
        if(a[i] == 0) 
        {
            has_zero = true;
            if(i >= 1 && a[i] == 0 && a[i-1] == 0)
            {
                cout << "YES" << nl;
                return;
            }
        }
    }

    if(!has_zero)
    {
        cout << "YES" << nl; 
    }
    else{
        cout << "NO" << nl;
    }
}

int main()
{
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

// 1 1 1 0
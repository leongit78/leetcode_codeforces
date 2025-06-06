#include <bits/stdc++.h>

using namespace std;

#define nl '\n'
#define sp ' '
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)

void solve()
{
    int n,k; cin >> n >> k;
    if(n == 1 && k == 2 || n == 2 && k == 1)
    {
        cout << "YES" << nl;
        return;
    }

    if(n == 1 || k > 1 || (n % 10) % 2 == 0) 
    {
        cout << "NO" << nl;
        return;
    }
    else{
        for(int i = 3; i <= sqrt(n); i+=2)
        {
            if(n % i == 0)
            {
                cout << "NO" << nl;
                return;
            }
        }
    }
    
    cout << "YES" << nl;
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
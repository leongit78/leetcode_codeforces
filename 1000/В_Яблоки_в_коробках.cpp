#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll
#define nl '\n'
#define sp ' '
#define pb push_back

void solve()
{
    int n, k; cin >> n >> k;
    int sum = 0;
    vector<int> a(n);

    for(auto& num : a)
    {
        cin >> num;
        sum += num;
    }

    sort(a.begin(), a.end());

    
    if(a[n-1] - 1 - a[0] > k || a[n-2] - a[0] > k)
    {
        cout << "Jerry" << nl;
        return;
    }
    if(sum % 2 != 0)
    {
        cout << "Tom" << nl;
        return;
    }
    else{
        cout << "Jerry" << nl;
        return;
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
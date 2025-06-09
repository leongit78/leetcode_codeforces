#include <bits/stdc++.h>

using namespace std;

#define nl '\n'
#define sp ' '
#define all(a) a.begin(), a.end()
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr)

void solve()
{
    int n; cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(all(a));
    int cnt_1 = 0; 
    int j = n-1;
    int cnt_2 = 0;
    while(a[cnt_1] % 2 != a[n-1] % 2 ) cnt_1++; 
    while(a[0] % 2 != a[j] % 2)
    {
        j--;
        cnt_2++;
    }
    cout << min(cnt_1, cnt_2) << nl;
}

int main()
{
    IOS;
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

// 2 3 4 5 1
// 1 2 3 4 5
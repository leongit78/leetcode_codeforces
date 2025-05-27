#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define nl '\n'
#define pb push_back
#define sp " "
#define fi first
#define se second
#define mp make_pair

void solution()
{
    int n, x; cin >> n >> x;
    vector<int> a(n);

    for(int i = 0; i < n; ++i)
    {
        a[i] = i;
    }
    for(int j = 0; j < n; j++)
    {
        if(a[j] == x) swap(a[j], a[n-1]);
        cout << a[j] << sp;
    }
    cout << nl;
    
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    while(t--)
    {
        solution();
    }
    return 0;
}
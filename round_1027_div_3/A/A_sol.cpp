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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        ll n = stoll(s); // string to ll
        ll a = (ll)sqrt(n);
        if (a * a == n) {
            cout << 0 << sp << a << nl;
        }
        else {
            cout << -1 << nl;
        }
    }
}
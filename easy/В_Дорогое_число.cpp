#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define sp ' '

void solve()
{
    string s; cin >> s;

    int cnt = 0;
    int i = s.size()-1;

    while(s[i] == '0')
    {
       cnt++; 
       i--; 
    }
    while(i >= 0)
    {
        if(s[i] != '0') cnt++;
        i--;
    }
    cout << cnt - 1 << nl;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    while(t--)
    {
        solve();
    }
}
#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define int ll 
#define nl '\n'
#define sp ' '

void solve()
{
    int t, p; cin >> t >> p;
    
    vector<int> a(p);
    set<int> s;
    for(int i = 0; i < p;++i)
    {
        cin >> a[i];
        s.insert(a[i]);  
    }

    int q; cin >> q;
    vector<int> b(q);

    for(int i = 0; i < q; ++i)
    {
        cin >> b[i];
        s.insert(b[i]);
    }

    if(s.size() < t){
        cout << "Oh, my keyboard!" << nl;
        return;
    }
    else{
        cout << "I become the guy." << nl;
        return;
    }
    
}

signed main()
{
    solve();
    return 0;
}
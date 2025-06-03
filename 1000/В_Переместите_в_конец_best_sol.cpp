#include <bits/stdc++.h>
using namespace std;

#define sp ' '
#define nl '\n'
#define ll long long
#define int ll

void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    

    for(auto& num : a) cin >> num;
    
    vector<int> pmax(n+1); // n + 1, так как нулевой индекс не нужен, а n-ый нужен 
    vector<int> psum(n+1);

    for(int i = 0; i < n; ++i)
    {
        pmax[i+1] = max(pmax[i], a[i]);// На i-ом индексе находится максимальный среди первых i элементов 
        psum[i+1] = psum[i] + a[i];// На i-ом индексе находится сумма первых i элементов 
    }
    for(int k = 1; k <= n; ++k)
    {
        cout << pmax[n - k + 1] + psum[n] - psum[n - k + 1] << sp; // От общей суммы отнимаем сумму всех элементов, среди которых находили максимальное, но не вклюячая его -> получаем сумму из максимальных
    }
    cout << nl; 
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

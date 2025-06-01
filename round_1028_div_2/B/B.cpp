#include <bits/stdc++.h>

using namespace std;

#define ll unsigned long long 
#define int ll
#define nl '\n'
#define sp ' '
#define tb '\t'

const int MOD = 998244353;
int binpow(int a, int n)
{
   int res = 1;
   while(n > 0)
   {
        if(n%2 == 1)
            res = (res * a) % MOD;
        a = (a*a) % MOD;
        n /= 2;
   } 
   return res;
}


void solve()
{
    int n; cin >> n;
    vector<int> p(n);
    vector<int> q(n);
    for(auto& nump : p) cin >> nump;
    for(auto& numq : q) cin >> numq;

    int r = 0;
    for(int i = 0; i < n; ++i)
    {
        int max_el_p = 0, max_el_q = 0, max_p_q, min_p_q;

        for(int j = 0; j <= i; ++j)
        {
            // cur_p = p[j]; // = 1
            // cur_q = q[i - j]; // = 9
            max_p_q = max(p[j], q[i-j]);
            min_p_q = min(p[j], q[i-j]);


            if (max_p_q > max_el_p || (max_p_q == max_el_p && min_p_q >= max_el_q))
            {
                // max_el_sum = p[j] + q[i-j];
                max_el_p = max_p_q;
                max_el_q = min_p_q;
           }
        }
        // Problem: How to calculate 2^10^5 % Mod? 

        // cout << binpow(2, max_el_p) + binpow(2, max_el_q) << sp;
        // r = (int)(pow(2, max_el_p) + pow(2, max_el_q)) % 998244353;
        // cout << r << sp;
    }
    cout << nl;
    
    // Подсказка: Степени 2-ки 

}

signed main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t; cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
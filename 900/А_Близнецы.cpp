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
    int t; cin >> t;
    int sum_full = 0, sum_taken = 0, c = 0;

    vector<int> a(t);
    for(int i = 0;i < t; ++i)
    {
        cin >> a[i];
        sum_full += a[i];
    }
    sort(a.begin(), a.end());

    while(sum_taken < sum_full/2 + 1) 
    {
       c++; 
       sum_taken += a.back();
       a.pop_back(); 
    }

    cout << c;

}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    solution();
    return 0;
}

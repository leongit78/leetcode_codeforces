#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    int min_h_idx = 0;
    int max_h_idx = 0;
    int max_h = 0;
    int min_h = 101;
    vector<int> a(t);

    for(auto& num : a) cin >> num;

    
    for(int i = 0, j = t-1; i < t; ++i, --j)
    {
        if(a[j] >= max_h)
        {
            max_h = a[j];
            max_h_idx = j;
        }
        if(a[i] <= min_h)
        {
            min_h = a[i];
            min_h_idx = i;
        }
    }
    if(min_h_idx == max_h_idx) cout << 0;
    if(min_h_idx > max_h_idx)
    {
        cout << max_h_idx + (t - min_h_idx - 1);
    }
    else
    {
        cout << max_h_idx + (t - min_h_idx -1) - 1;
    }
    return 0;
}
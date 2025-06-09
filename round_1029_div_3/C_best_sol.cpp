// TODO: understand how this works
#include <bits/stdc++.h>

using namespace std;

#define sp ' '
#define nl '\n'
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr)
#define all(a) a.begin(), a.end()

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> distinct(n), freq(n + 1);
    
    int total = 0;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        freq[v[i]]++;
        if(freq[v[i]] == 1) distinct[i] = 1;
        distinct[i] += (i ? distinct[i - 1] : 0);
    }

    fill(freq.begin(), freq.end(), 0);

    int ans = 0, end = n - 1;
    total = 0;
    for(int i = n - 1; i >= 0; i--) {
        freq[v[i]]++;
        if(freq[v[i]] == 1) total++;
        
        if(total == distinct[end]) {
            ans++;
            for(int j = i; j <= end; j++) freq[v[j]] = 0;
            end = i - 1;
            total = 0;
        }
    }

    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) solve();
}

#include <bits/stdc++.h>

using namespace std;

#define sp ' '
#define nl '\n'
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

int pairs[101] = {0};

int main()
{
    IOS
    int cnt = 0;
    int n; cin >> n;
    vector<vector<int>> a(n, vector<int>(2));
    for(int i = 0; i < n; ++i)
    {
        cin >> a[i][0] >> a[i][1];
        pairs[a[i][0]]++;
    }

    for(int i = 0; i < n; i ++ )
    {
        cnt += pairs[a[i][1]];
    }
    cout << cnt;


    return 0;
}
#include <bits/stdc++.h>

using namespace std;

#define sp ' '
#define nl '\n'
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);


int main()
{
    int t; cin >> t;
    int n;

    for(int i = 0; i < t; ++i)
    {
        cin >> n;
        cout << n/2 - (n%2 == 0) << nl;
    }
    
}
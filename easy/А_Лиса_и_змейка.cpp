#include <bits/stdc++.h>

using namespace std;

#define sp ' '
#define nl '\n'
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

int main()
{
    int n,m; cin >> n >> m;
    for(int i = 0; i < n; ++i)
    {
        if(i % 2 == 0)
        {
            for(int j = 0; j < m; ++j)
            {
                cout << '#';
            }
            cout << nl;
        }
        else{
            if(abs(i-5) % 4 == 0)
            {
                for(int j = 0; j < m-1; ++j)
                {
                    cout << '.';
                }
                cout << '#' << nl;
            }
            else{
                cout << '#';
                for(int j = 0; j < m-1; ++j)
                {
                    cout << '.';
                }
                cout << nl;
            }
        }
    }
}
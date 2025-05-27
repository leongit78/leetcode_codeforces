#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    
    cin >> t;
    vector<int> a(t);

    for(int i = 0; i < t; i++)
    {
        cin >> a[i];
    }

    for(int i = 0; i < t; i++)
    {
        int k = (int)sqrt(a[i]);
        if(sqrt(a[i]) != floor(sqrt(a[i])))
        {
            cout << -1 << endl;
        }
        else if(k % 2 != 0)
        {
            cout << k/2 << " " << k/2 + 1 << endl;
        }
        else{
            cout << k/2 << " " << k/2 << endl;
        }
    }

    return 0;
}
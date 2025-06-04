#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k,l,m,n,d; cin >> k >> l >> m >> n >> d;

    int cnt = 1;

    if(k == 1 || l == 1 || m == 1 || n == 1) 
    {
        cout << d;
        return 0;
    }
    if(k + l + m + n > d * 4) 
    {
        cout << 0;
        return 0;
    }

    int min_del = min(min(k,l), min(m,n));
    cnt += min_del - 2;

    for(int i = min_del + 1; i <= d; ++i)
    {
        if(i % k != 0 && i % l != 0 && i % m != 0 && i % n != 0)
        {
            cnt++;
        }
    }
    cout << d - cnt;
    return 0;
}
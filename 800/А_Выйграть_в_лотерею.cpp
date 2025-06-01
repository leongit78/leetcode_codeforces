#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int cnt = 0;
    while(n > 0)
    {
        if(n >= 100)
        {
            cnt += n/100;
            n -= n/100 * 100;
        }
        else if(n >= 20 && n < 100)
        {
            cnt += n/20;
            n -= n / 20 * 20;
        }
        else if(n >= 10 && n < 20)
        {
            n -= 10;
            cnt++;
        }
        else if(n >= 5 && n < 10)
        {
            n -= 5;
            cnt++;
        }
        else{
            cnt += n;
            break;
        }
    }
    cout << cnt;
}
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string s = "I hate ";
    string ss = "I love ";
    string res = "";
    
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i != n)
        {
            res += (i % 2 != 0) ? s + "that " : ss + "that ";
        }
        else
        {
            res += (i % 2 != 0) ? s + "it" : ss + "it";
        }
    }

    cout << res;

    return 0;
}
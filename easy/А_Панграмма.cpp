#include <bits/stdc++.h>
using namespace std;



int main()
{
    int n; cin >> n;

    string s; cin >> s;
    set<char> unique_symbols;

    for (int i = 0; i < n; ++i)
    {
        s[i] = tolower(s[i]);
        unique_symbols.insert(s[i]);
    }

    if(unique_symbols.size() < 26 || n < 26)
        cout << "NO";
    else
        cout << "YES"; 

    return 0;
}
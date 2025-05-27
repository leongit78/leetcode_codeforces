// НЕ РАБОТАЕТ(НЕ РЕШИЛ)
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t, n, k; cin >> t;
    vector<string> res(t); 

    for(int i = 0; i < t; i++)
    {
        cin >> n >> k;

        vector<char> s(t);
        int cnt = 0;
        
        for(int j = 0; j < n; j++)
        {
            cin >> s[j];
        } 
        //Считаем хорошие пары
        for(int l = 0, m = n - 1; l < n/2; l++, m--)
        {
            if(s[l] == s[m])
                cnt++;
        }

        if(cnt % 2 == k % 2) // && Чтобы единиц/нулей хватало для того, чтобы изменить кол-во хороших пар с текущего(cnt) до нужного(k)
            res[i] = "YES";
        else
            res[i] = "NO";
    
    }
    return 0;
}
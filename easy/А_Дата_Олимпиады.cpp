#include <bits/stdc++.h>

using namespace std;

#define sp ' '
#define nl '\n'
#define IOS ios_base::sync_with_stdio(false); cin.tie(nullptr)

void solve()
{
    int n; cin >> n;
    int cnt[10] = {}; // Массив-счетчик для цифр 
    bool f = 0; // флаг, если на конец исполнения программы true -> получилось составить дату, false -> цифр не хватило, чтобы составить дату

   for(int i = 0; i < n; i++)
   {
        int dig; cin >> dig;
        cnt[dig]++;
        if(cnt[0] >= 3 && cnt[1] >= 1 && cnt[3] >= 1 && cnt[2] >=2 && cnt[5] >= 1 && !f) // Если цифр цже достаточно, то выводим колво достанных f устанавливаем в true
        {
            cout << i + 1 << nl;
            f = 1;
        }
   }
   if(!f) cout << 0 << nl;
}

int main()
{   
    IOS;
    int t; cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
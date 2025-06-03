#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define nl '\n'
#define pb push_back
#define sp " "
#define fi first
#define se second
#define mp make_pair

void task()
{

    // обЪявление и инициальзация в в одной строке 
    int n, k; cin >> n >> k;
    string s; cin >> s;
    // Считаем сколько нулей и единиц
    int n1 = (int)count(s.begin(), s.end(), '1');
    int n2 = (int)count(s.begin(), s.end(), '0');
    
    // Объяснение

    // n/2 - максимальное кол-во хороших пар в строке
    // k - нужное кол-во хороших пар в строке 


    // Вывод если либо 0 либо 1 нехватает -> n1 - upr < 0 или n2 - upr < 0 -> NO
    // Если (n/2 - k) и n1(или n2) разной четности(перефразировка n1 - (n/2 - k) % 2) <-> аналогично моему условию(B_my.cpp), где четность кол-ва уже хороших пар и нужного кол-ва хорошиъ пар должна совпадать -> YES

    
    // Если у макс. кол-ва "хороших" пар (n/2) и нужного кол-ва "хороших"(k) пар ОДИНАКОВАЯ четность -> YES, только если единиц и нулей ЧЕТНОЕ кол-во. 
    // Если у макс. кол-ва "хороших" пар (n/2) и нужного кол-ва "хороших"(k) пар РАЗНАЯ четность -> YES, только если единиц и нулей НЕЧЕТНОЕ кол-во. 

    // Запишем проще: (n/2 - k) % 2 == n1 % 2.
    
    // Вывод: YES <=> | 1) Хватает единиц и нулей: n1 - upr >= 0 && n2 - upr >= 0. 
    //                | 2) (n/2 - k) % 2 == n1 % 2 .

    int upr = n / 2 - k;  
    
    if (n1-upr >= 0 && n2-upr >= 0 && upr % 2 == n1 % 2) {
        cout << "YES" << nl;
    }
    else {
        cout << "NO" << nl;
    }
}

int main()
{
    // Optimizing cin cout 
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    ll t; cin >> t;
    while(t--)
    {
        task();
    }
    return 0;
}

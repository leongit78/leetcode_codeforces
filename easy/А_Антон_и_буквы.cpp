#include <bits/stdc++.h>
using namespace std;

#define sp ' '
#define nl '\n'

int res; 
bool mark[30]; // глобальный массив, заполнен false, если буква уже встречалась в строке -> true, иначе false


int main()
{
    string s;
    getline(cin, s); // cin >> s чиатает до первого пробельного символа, остальнын символа остаются в потоке ввода. getline(cin, s) Считывает все символы до символ \n 
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            res += !mark[s[i] - 'a']; // если буква уже встречалась то !true = false = 0, иначе !false = true = 1
            mark[s[i] - 'a'] = true; // помечаем текущую букву как уже встретившуюся
        }
    }
    cout << res;
    return 0;
}
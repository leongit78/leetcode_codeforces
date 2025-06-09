#include <bits/stdc++.h>

using namespace std;

#define sp ' '
#define nl '\n'

int main()
{
    int n; cin >> n;
    int min;
    vector<int> a(n);

    for(int i = 0; i < n; i++) cin >> a[i];

    for(int i = 0; i < n-1; i++)
    {
        min = i; // Отмечаем текущий i-ый  элемент как минимальный среди [i, n-1]
        for(int j = i + 1; j < n; j++)
        {
            if(a[j] < a[min]) min = j; // Если находим элемент меньше предыдущего -> запоминаем его индекс 
        }
        swap(a[i], a[min]); // Меняем i-ый элемент с минимальным среди [i, n-1]
    }

    for(int i = 0; i < n; i++) cout << a[i] << sp;
    return 0;
}

// 3 2 1


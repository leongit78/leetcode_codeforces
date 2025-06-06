#include <bits/stdc++.h>
using namespace std;

#define sp ' '
#define nl '\n'
#define inf 1e18

int main() {
    int n; 
    cin >> n;
    vector<vector<int>> coords(2 * n, vector<int>(2));
    vector<bool> paired(2 * n, false);  // Отслеживание уже парных точек
    double sum = 0.0;

    for (int i = 0; i < 2 * n; ++i) {
        cin >> coords[i][0] >> coords[i][1];
    }

    for (int i = 0; i < 2 * n; ++i) {
        if (!paired[i]) {
            paired[i] = true;
            int closest = -1; // Индиктор того, что все точки нашли пару
            double min_dist = inf;

            // Поиск поикс ближайщей(сумма разностей соотв координат минимальная относительно остальных) не парной точки
            for (int j = 0; j < 2 * n; ++j) {
                if (!paired[j]) {
                    double dx = coords[j][0] - coords[i][0];
                    double dy = coords[j][1] - coords[i][1];
                    double dist = sqrt(dx * dx + dy * dy);
                    if (dist < min_dist) { 
                        min_dist = dist;
                        closest = j;
                    }
                }
            }

            if (closest != -1) { // Нашли ближающую точку -> pair'им ее с i-ой, чтобы при следующем проходе она не учитывалась 
                paired[closest] = true;
                sum += min_dist; // Прибавляем в сумме расстояние до найденной ближайщей точки
            }
        }
    }

    // fixed = фикированная дясятичная запись дробных чисел
    // setprecision(2) - при исп. с fixed = кол-во знаков после запятой 
    cout << fixed << setprecision(2) << sum << nl;
    return 0;
}
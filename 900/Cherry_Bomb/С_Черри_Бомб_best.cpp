#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n, k; cin >> n >> k;
    int a[n], b[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    int s = -1;

    // Проверка на то, являются ли массивы дополняющими изначально(не затрашивая -1)
    for (int i = 0; i < n; i++) {
        if (b[i] != -1) {
            if (s == -1) s = a[i] + b[i];
            else {
                if (s != a[i] + b[i]) { // аналогично моему сравнению прошлой суммы с текущей. Если prev != cur -> 0
                    cout << 0 << '\n';
                    return;
                }
            }
        }
    }
    
    // Если все элементы b вакантны(cnt_voc = n из моего решения) -> находим разницу м/у макс и мин значением из a -> k - эта разница + 1 = кол-во способов 
    if (s == -1) {
        sort(a, a+n);
        int mx = a[n-1] - a[0];
        cout << k - mx + 1 << '\n';
        return;
    }
    // Если есть среди элементов b есть хотя бы один фиксированный -> Если какое-либо значение из a больше дефолтной суммы(s) или вычисляемое b[i](= s - a[i]) оказывается больше k -> 0
    for (int i = 0; i < n; i++) {
        if (a[i] > s || s - a[i] > k) {
            cout << 0 << '\n';
            return;
        }
    }
    cout << 1 << '\n'; // Если все прошло -> 1
}
 
int main() {
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
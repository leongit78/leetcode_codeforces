#include <iostream>
using namespace std;
int main()
{
    int a, b;
    int years = 0;
    cin >> a >> b;
    while(a <= b)
    {
        a *= 3;
        b *= 2;
        years ++;
    }
    cout << years;

    return 0;
}
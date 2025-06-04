#include <iostream>
using namespace std;

int main(void)
{
    int n;
    int rates[101];
    int cnt = 0;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> rates[i];
        cnt += rates[i];
    }
    if(cnt > 0)
        cout << "HARD";
    else
        cout << "EASY";
    return 0;
}
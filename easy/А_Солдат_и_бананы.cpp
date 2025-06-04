#include <iostream>
using namespace std;
int main()
{
    int k,n,w;
    int summ = 0;
    cin >> k >> n >> w;
    for(int i = 1; i <= w; i++)
    {
        summ += k * i;
    } 
    if(summ - n > 0) cout << summ - n;
    else cout << 0;

    return 0;
}
#include <iostream>
using namespace std;


bool is_unique(int);
int main(void)
{
    int y;
    cin >> y;
    do
    {
        y++;
    } while (!is_unique(y));
    cout << y;
    return 0;
}

bool is_unique(int y)
{
    int N[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    while(y > 0)
    {
        if(N[y%10] > 0)
            return false;
        else
            N[y%10]++;
        y/=10;
    }
    return true;
}
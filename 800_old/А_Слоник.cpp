#include <iostream>
using namespace std;

int main()
{
    int steps = 1;
    int x;
    cin >> x;

    if(x <= 5) 
    {
        cout << 1;
        return 0;
    }
    while(steps * 5 < x)
    {
        steps++;
    }
    cout << steps;
    return 0;
}
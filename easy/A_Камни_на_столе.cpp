#include <iostream>
using namespace std;

int main()
{
    int n;
    char colors[51];
    int count = 0;

    cin >> n;
    cin >> colors;

    for(int i = 0; i < n-1; i++)
    {
        if(colors[i+1] == colors[i])
            count++;
    }
    cout << count;
    return 0;
}
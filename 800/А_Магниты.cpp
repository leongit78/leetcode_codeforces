#include <iostream>
using namespace std;

int main(void)
{
    int n;
    int count = 0;
    char prev[3] = {0};
    char curr[3] = {0};

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> curr;

        if(curr[0] != prev[0])
        {
            count++;
        }

        prev[0] = curr[0];
        prev[1] = curr[1];
    }

    cout << count;

    return 0;
}
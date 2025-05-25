#include <iostream>
using namespace std;

int main(void)
{
    int n;
    int gifts[101];
    int gifters[101] = {0};    
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        cin >> gifts[i];
        gifters[gifts[i]] = i;    
    };

    for(int j = 1; j <= n; j++)
    {
        cout << gifters[j] << ' ';
    }
    return 0;
}
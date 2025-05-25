#include <iostream>
using namespace std;

int main(void)
{
    int n;
    int rooms[202];
    int cnt = 0; 
    cin >> n;

    for(int i = 0, j = 0; i < n; i++, j+=2)
    {
        cin >> rooms[j] >> rooms[j+1];
        cnt += (rooms[j+1] - rooms[j] >= 2) ? 1 : 0;
    }
    
    cout << cnt;
    return 0;
}
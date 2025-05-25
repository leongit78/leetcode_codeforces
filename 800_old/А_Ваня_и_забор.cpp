#include <iostream>
using namespace std;
int main(void)
{
    int n,h;
    int width = 0;
    int friends[1001];
    cin >> n >> h;
    for(int i = 0; i < n; i++)
    {
        cin >> friends[i];
    }

    for(int j = 0; j < n; j++)
    {
        if(friends[j] > h)
            width += 2;
        else   
            width++;
    }

    cout << width;
    return 0;
}
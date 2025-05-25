#include <iostream>
using namespace std;

int main(void)
{
    int n, t;
    char queue[51];
    
    cin >> n >> t;
    cin >> queue;


    for (int j = 0; j < t; j++)
    {
        int i = 0;
        while (i < n)
        {
            if (queue[i] == 'B' && queue[i + 1] == 'G')
            {
                char ch_temp = queue[i];
                queue[i] = queue[i + 1];
                queue[i + 1] = ch_temp;
                i += 2;
            }
            else
                i++;
        }
    }

    cout << queue;
    return 0;
}
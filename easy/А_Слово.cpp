#include <iostream>
using namespace std;

int main()
{
    char s[101];
    int i = 0, cnt = 0;
    cin >> s;
    
    while(s[i] != '\0')
    {
        if(s[i] >= 65 && s[i] <= 90)
        {
            cnt++;
        }
        i++;
    }

    if(cnt > i/2)
    {
        for(int j = 0; s[j] != '\0'; j++)
        {
            if(s[j] >= 97 && s[j] <= 122)
            {
                s[j] -= 32;
            }
        }
    }
    else
    {
        for(int k = 0; s[k] != '\0'; k++)
        {
            if(s[k] >= 65 && s[k] <= 90)
            {
                s[k] += 32;
            }
        }
    }

    cout << s;
    return 0;
}
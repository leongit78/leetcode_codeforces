#include <iostream>
using namespace std;

int main()
{
    char s1[101];
    char s2[101];

    cin >> s1;
    cin >> s2;
    
    for(int i = 0; s1[i] != '\0'; i++)
        s2[i] = (s1[i] == s2[i]) ? '0' : '1';

    cout << s2;
    return 0;
}
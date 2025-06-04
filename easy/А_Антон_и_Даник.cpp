#include <iostream>
using namespace std;

int main()
{
    int n;
    int cnt = 0;
    int i = 0;
    char str[100001];
    cin >> n;
    cin >> str;

    while(i < n)
    {
        if(str[i] == 'A')
            cnt++;
        i++;
    }   
    if(cnt == n/2 && n % 2 == 0)
       cout << "Friendship"; 
    else if (cnt > n/2)
        cout << "Anton";
    else
        cout << "Danik";

    return 0;
}
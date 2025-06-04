#include <iostream>
using namespace std;

int main(void)
{
    char str1[101] = {0};
    char str2[101] = {0};
    int len = 0;

    cin >> str1;
    cin >> str2;
    
    //Считаем длину исходной строки
    while(str1[len] != '\0')
    {
        len++;
    }

    if(str1[len] != str2[len])
    {
        cout << "NO";
        return 0;
    }

    for(int i = len-1, j = 0; j < len; i--, j++)
    {
        if(str1[i] != str2[j])
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";

    return 0;
}
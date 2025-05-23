#include <iostream>

using namespace std;
int main()
{
    char str[100];
    char unique_symbols[100] = {0};
    int k = 0;
    cin >> str;

    for(int i = 0; str[i] != '\0'; i++)
    {
        bool is_already = false;
        for(int j = 0; unique_symbols[j] != '\0'; j++)
        {
            if(str[i] != unique_symbols[j])
            {
                continue;
            }
            else
            {
                is_already = true;
                break;
            }
        }
        if(!is_already)
        {
            unique_symbols[k] = str[i];
            k++;
        }
    }

    if(k % 2 != 0)
    {
        cout << "IGNORE HIM!" << endl;
    }
    else 
    {
        cout << "CHAT WITH HER!" << endl;
    }



    return 0;
}
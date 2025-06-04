#include <iostream>
// #include <set>
using namespace std;

int main()
{
    int arr[4];
    int set[4];
    int k = 0;
    // set <int> s;
    for(int i = 0; i < 4; i++)
    {
        bool is_in_set = false;
        cin >> arr[i];
        for(int j = 0; j < 4; j++)
        {
            if(arr[i] == set[j]){
                is_in_set = true;
                break;
            }
        }
        if(!is_in_set)
        {
            set[k] = arr[i];
            k++;
        }
        // s.insert(arr[i]);
    }

    // cout << 4 - s.size();
    cout << 4 - k;
    return 0;
}
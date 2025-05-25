#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    int arr[2];
    int cnt = 0; 
    int cnts[10001];
    cin >> t;
    

    for(int i = 0; i < t; i++)
    {
        cin >> arr[0] >> arr[1];
        if(arr[0] % arr[1] == 0)
            cnt = 0;
        else if(arr[0] < arr[1])
            cnt = arr[1] - arr[0];
        else if(arr[0] > arr[1]){
            cnt = (arr[1] * (arr[0] / arr[1] + 1)) - arr[0];
        }
        cnts[i] = cnt; 
        cnt = 0;
    }

    for(int j = 0; j < t; j++)
    {
        cout << cnts[j] << endl;
    }
    
    return 0;
}
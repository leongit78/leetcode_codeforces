#include <iostream>
using namespace std;

int main(void)
{
    int n;
    int drinks[101];
    double percent_sum = 0.0;
    cin >> n;

    int i = 0;
    while(i < n)
    {
        cin >> drinks[i];
        percent_sum += (double)drinks[i] / 100.0; 
        i++;
    }
    cout << percent_sum / (double)i * 100.0;
    return 0;
}
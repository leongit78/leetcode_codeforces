#include <iostream>
using namespace std;

int main(void)
{
    int n;
    int passengers[2002];
    int max = 0;
    int ppl = 0;
    int i = 0,j = 0;
    cin >> n;
      
    while(i<n)
    {
        cin >> passengers[j] >> passengers[j+1];
        i++;
        j+=2;
    }

    for(int k = 0; k < j; k++)
    {
       if(k % 2 == 0)
       {
            ppl -= passengers[k]; 
       } 
       else{
            ppl += passengers[k];
            max = (ppl > max) ? ppl : max; 
       }
    }
    cout << max;
    return 0;
}

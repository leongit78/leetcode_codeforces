#include <bits/stdc++.h>

using namespace std;

#define sp ' '
#define N 13


int main()
{

    int A[N] = {0,1,1,1,0,1,1,1,0,0,1,1,0}, B[N] = {0,0,1,1,1,1,1,0,0,1,1,1,0}, C[N + 1] = {0};
    int remainder = 0;
    for(int j = N - 1; j >= 0; j--)
    {
        if(A[j] + B[j] + C[j+1] >= 2) remainder++;
        
        if(remainder > 0)
        {
            C[j] = 1;
            remainder--;
        } else C[j] = 0;

        C[j+1] = C[j+1] ^ A[j] ^ B[j];
    }

    for(int i = 0; i < N+1; i++)
    {
        cout << C[i] << sp;
    }

}
// 0 1 2 3 4
//   1 0 1 1
//   0 1 1 0
// 1 0 0 0 1
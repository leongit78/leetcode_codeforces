#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll
#define nl '\n'
#define sp ' '
#define pb push_back

signed main()
{
	int t; cin >> t;
	vector<int> res(t);

	for(int l = 0; l < t; ++l)
	{
		int n, k; cin >> n >> k;
        
		int cur_sum, prev_sum, max_sum_default = 0,  max_sum = 0, max_el_first = -1, cnt_voc = 0;
		bool is_valid_default = true;
        bool is_valid_k = true;

		vector<int> a(n);
		vector<int> b(n);


		for(int i = 0; i < n; ++i) cin >> a[i];
		for(int i = 0; i < n; ++i) cin >> b[i];

        for(int i = 0; i < n; ++i)
        {
            if(b[i] != -1){
                prev_sum = a[i] + b[i];
                break;
            }
        }

        for(int i = 0; i < n; ++i)
        {
            if(b[i] == -1){
                cnt_voc++; 
            }
            else
            {
                cur_sum = a[i] + b[i];
                if(prev_sum != cur_sum)
                {
                    is_valid_default = false;
                    break; 
                }
                prev_sum = cur_sum;
            }
        }   

        if(!is_valid_default) 
        {
            res[l] = 0;
            continue;
        }

        for(int i = 0; i < n; ++i)
        {
            if(b[i] == -1) 
                max_sum = max(max_sum, a[i]);
            else
                max_sum = max(max_sum, a[i] + b[i]);
            max_sum_default = max(max_sum_default, a[i] + b[i]);
        }

        for(int i = 0;i < n; ++i)
        {
            if (max_sum - a[i] > k || cnt_voc < n && a[i] > max_sum_default)
            {
                is_valid_k = false;
                break;
            }
            max_el_first = max(max_el_first, max_sum - a[i]);
        }

        if(!is_valid_k) 
        {
            res[l] = 0;
        }
        else if(cnt_voc < n)
        {
            res[l] = 1;
        }
        else
        {
            
            res[l] = k - max_el_first + 1;
        }
    }

	for(int i = 0; i < t; ++i)
	{
		cout << res[i] << nl;
	}

	return 0;
}
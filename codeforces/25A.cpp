//https://codeforces.com/problemset/problem/25/A
#include<bits/stdc++.h>
using namespace std;
const int N = 100 +3;
int a[N] , n;

int index_of_diff_num()
{
    int num_of_odd = 0, num_of_even = 0, index_of_first_odd = 0, index_of_first_even = 0;
    for (int i = 0; i < n ; i++)
    {
        if (a[i] % 2 == 0)
        {
            if (num_of_even == 0)
            {
                index_of_first_even = i+1;
                num_of_even++;
            }
            else
            {
                num_of_even++;
            }
        }
        else
        {
            if (num_of_odd == 0)
            {
                index_of_first_odd = i+1;
                num_of_odd++;
            }
            else
            {
                num_of_odd++;
            }
        }
    }
    if (num_of_even == 1)
    {
        return index_of_first_even;
    }
    else
        return index_of_first_odd;
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    cin >> n;
    for (int i = 0 ; i < n ; i++)
    {
        cin >> a[i];
    }

    cout << index_of_diff_num();

    return 0;
}

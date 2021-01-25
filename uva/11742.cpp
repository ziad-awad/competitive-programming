#include<bits/stdc++.h>
using namespace std;
int const N = 8, M = 20;
int teens[N], constraints[M][3] , n , m;

void fill_teens()
{
    for (int i = 0; i < n; i++) teens[i] = i;
}

int get_index(int x)
{
    for (int i = 0; i < n; i++)
    {
        if (teens[i] == x)
            return i;
    }

}

bool valid_cons(int a , int b , int c)
{
    int index1 = get_index(a), index2 = get_index(b);
    if (c > 0) // diff at most
    {
        return abs(index1 - index2) <= c ;
    }
    else // diff at least
    {
        c = abs(c);
        return abs(index1 - index2) >= c;
    }

}


int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    while (true)
    {
        cin >> n >> m;
        if (n + m == 0) break ;
        fill_teens();

        for (int i = 0; i < m; i++)
        {
            cin >> constraints[i][0] >> constraints[i][1] >> constraints[i][2];
        }
        int ans = 0;
        do
        {
            bool valid = true;
            for (int i = 0; i < m; i++)
            {
                if (!valid_cons(constraints[i][0], constraints[i][1], constraints[i][2]))
                {
                    valid = false;
                    break;
                }
            }
            if (valid) ans++;

        } while (next_permutation(teens,teens+n));

        cout << ans << endl;
    }
    
    return 0;
}

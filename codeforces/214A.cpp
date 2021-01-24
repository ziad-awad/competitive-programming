#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n, m;
    bool found = false;
    pair<int, int >p;
    vector<pair<int, int >> v;
    cin >> n >> m;

    for(int a = 0 ; a <= 35 ; a++)
        for (int b = 0 ; b <= 35 ; b++)
        {
            if ((a*a) + b == n && (b*b) + a == m )
            {
                p.first = a;
                p.second = b;
                v.push_back(p);
                found = true;
            }
        }
    if (found)
    {
        cout << v.size();
    }
    else
    {
        cout << 0;
    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    multiset<int>s;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        s.insert(temp);
    }

    for (auto it : s)
    {
        cout << it << ' ';
    }
    
    return 0;
}

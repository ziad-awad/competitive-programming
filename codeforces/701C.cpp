//https://codeforces.com/problemset/problem/701/C

#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 2, M = 200;
string s;
int n;

int count_diff_chars()
{
    int freq[M];
    memset(freq, 0, sizeof freq);

    for (int i = 0; i < s.size(); i++)
    {
        freq[int(s[i])]++;
    }

    int num_of_diff_char = 0;
    for (int i = 0; i < M; i++)
    {
        if (freq[i] != 0)
        {
            num_of_diff_char++;
        }
    }

    return num_of_diff_char;
}
int freq[M];

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n >> s;
    int num_of_diff = count_diff_chars();
    int current_chars = 0;
    int p = 0;
    int ans = n;
    for (int i = 0; i < n; i++) {
        if (freq[int(s[i])] == 0) current_chars++;
        freq[int(s[i])]++;
        while (freq[int(s[p])] > 1) {
            freq[int(s[p])]--;
            p++;
        }
        if (current_chars == num_of_diff) 
            ans = min(ans, i - p + 1);
    }
    cout << ans;

    return 0;
}

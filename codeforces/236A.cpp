#include<bits/stdc++.h>
using namespace std;
string s;
int freq[30];

string boyOrGirl()
{
    int diff_number = 0;
    memset(freq , 0 , 26);
    for (int i = 0; i < s.size(); i++)
    {
        freq[s[i] - 'a']++;
    }
    for (int i = 0; i < 30; i++)
    {
        if (freq[i] > 0)
        {
            diff_number++;
        }
    }
    if (diff_number % 2 == 0)
    {
        return "CHAT WITH HER!";
    }
    else
    {
        return "IGNORE HIM!";
    }

}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    
    cin >> s;
    cout << boyOrGirl();

    return 0;
}

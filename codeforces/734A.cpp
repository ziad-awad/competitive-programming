#include<bits/stdc++.h>
using namespace std;
int n;
string s;

string who_win()
{
    int AntonScore = 0;
    int DanikScore = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'A')
        {
            AntonScore++;
        }
        else
        {
            DanikScore++;
        }
    }

    if (AntonScore == DanikScore)
        return "Friendship";

    else if (AntonScore > DanikScore)
        return "Anton";

    else
        return "Danik";
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n;
    cin >> s;

    cout << who_win();

    return 0;
}

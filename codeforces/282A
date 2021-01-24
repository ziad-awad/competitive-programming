#include<bits/stdc++.h>
using namespace std;
int value = 0;
string s;

void program()
{
    if (s == "++X" || s == "X++")
    {
        value++;
    }
    else if (s == "--X" || s == "X--")
    {
        value--;
    }
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    while (n > 0)
    {
        cin >> s;
        program();
        n--;
    }
    cout << value;

    return 0;
}

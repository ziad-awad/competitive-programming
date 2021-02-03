#include<bits/stdc++.h>
using namespace std;
int a, b;

int bigBrother()
{
    int num_years = 0;
    while (a <= b)
    {
        a *= 3;
        b *= 2;
        num_years++;
    }
    return num_years;
}


int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    cin >> a >> b;
    cout<<bigBrother();
    
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int const N = 1000;
int a[3];
int n;

int write()
{
    int num_problem = 0;
    for (int i = 0 ; i < n ; i++)
    {
        int writeIt = 0;
        cin >> a[0] >> a[1] >> a[2];
        for (int i = 0; i < 3; i++)
        {
            if (a[i] == 1)
                writeIt++;
        }
        if (writeIt > 1)
            num_problem++;
    }
    return num_problem;
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n;
    cout << write();
    
    return 0;
}

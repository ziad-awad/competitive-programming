#include<bits/stdc++.h>
using namespace std;
int num1, num2;

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> num1 >> num2;
    long long sum = 0;
    int a[10];
    a[0] = a[6] = a[9] = 6;
    a[1] = 2;
    a[2] = a[3] = a[5] = 5;
    a[4] = 4;
    a[7] = 3;
    a[8] = 7;

    for (int i = num1; i < num2+1; i++)
    {
        int k = i;
        while (k > 0)
        {
            int r = k % 10;
            k /= 10;
            sum += a[r];
        }
    }


    cout << sum;

    return 0;
}

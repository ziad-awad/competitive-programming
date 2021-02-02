#include<bits/stdc++.h>
using namespace std;
int const N = 1000 ;
int n, h;
int a[N];

int min_width()
{
    int width = 0;
    for (int i = 0 ; i < n ; i++)
    {
        if (a[i] > h)
        {
            width += 2;
        }
        else
        {
            width++;
        }
    }

    return width;
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n >> h;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout<<min_width();
    
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

long long value;
int  num_of_operations ;

int dec_number()
{
    while (num_of_operations > 0)
    {
        if (value % 10 == 0  )
        {
            value = value / 10;
        }
        else if(value % 10 != 0 )
        {
            value = value - 1;
        }
        num_of_operations--;
    }

    if (value >= 0)
    {
        return value;
    }
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    cin >> value >> num_of_operations;
    cout << dec_number();
   

    return 0;
}

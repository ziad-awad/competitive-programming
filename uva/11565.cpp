#include<bits/stdc++.h>
using namespace std;
int A, B, C;

void answerFunc()
{
    cin >> A >> B >> C;
    vector <int> v;

    for (int x = -100 ; x <= 100 && v.empty() ; x++ )
    {
        for (int y = -100; y <= 100 && v.empty(); y++)
        {
            for (int z = -100; z <= 100 && v.empty(); z++)
            {
                if (x != y && x != z && y != z &&
                    x + y + z == A && x * z * y == B && (x * x) + (y * y) + (z * z) == C)
                {
                    v = { x , y , z };
                }
            }
        }
    }
    if (v.empty())
    {
        cout << "No solution."<<endl;
    }
    else
    {
        cout << v[0] << " " << v[1] << " " << v[2] << endl;;
    }
}


int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    
    int test_cases;
    cin >> test_cases;

    while (test_cases > 0)
    {
        answerFunc();

        test_cases--;
    }


    return 0;
}

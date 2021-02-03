#include<bits/stdc++.h>
using namespace std;
int const N = 5;
int matrix[N][N];
int idx1, idx2;

void get_matrix()
{
    for (int i = 0 ; i < N ; i++)
        for (int j = 0; j < N; j++) {
            cin >> matrix[i][j];
            if (matrix[i][j] == 1) {
                idx1 = i;
                idx2 = j;
            }
        }
}

int toBeautifulMatrix()
{
    int numberOfMoves = 0;
    numberOfMoves = abs(idx1 - 2) + abs(idx2 - 2);
    return numberOfMoves;
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    get_matrix();
    cout << toBeautifulMatrix();
    
    return 0;
}

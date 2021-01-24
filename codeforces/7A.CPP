    #include<bits/stdc++.h>
     
    using namespace std;
    const int N = 8;
    char matrix[N][N];
     
    bool check_all_black() {
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++)
                if (matrix[i][j] != 'B')
                    return false;
        return true;
    }
     
    int count_black_rows() {
        int number_of_black_rows = 0;
        for (int i = 0; i < N; i++) {
            bool all_black = true;
            for (int j = 0; j < N; j++) {
                if (matrix[i][j] != 'B')
                    all_black = false;
            }
            if (all_black)
                number_of_black_rows++;
        }
        return number_of_black_rows;
    }
     
    int count_black_cols() {
        int number_of_black_cols = 0;
        for (int j = 0; j < N; j++) {
            bool all_black = true;
            for (int i = 0; i < N; i++) {
                if (matrix[i][j] != 'B')
                    all_black = false;
            }
            if (all_black)
                number_of_black_cols++;
        }
        return number_of_black_cols;
    }
     
    int main() {
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++)
                cin >> matrix[i][j];
        if (check_all_black())
            cout << "8";
        else
            cout << count_black_cols() + count_black_rows();
        return 0;
    }

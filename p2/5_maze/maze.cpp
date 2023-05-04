#include "iostream"

using namespace std;
int matrix[10][10];
int cnt;

void dfs(int bi, int bj, int ei, int ej);

int main() {
    int n, m;
    int bi, bj, ei, ej;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i <= n; ++i) {
        matrix[i][0] = matrix[i][m + 1] = 1;
    }
    for (int j = 0; j <= m; ++j) {
        matrix[0][j] = matrix[n + 1][j] = 1;
    }
    cin >> bi >> bj >> ei >> ej;
    dfs(bi, bj, ei, ej);
    cout << cnt;
    return 0;
}

void dfs(int bi, int bj, int ei, int ej) {
    if (bi == ei && bj == ej) {
        cnt++;
        return;
    }
    matrix[bi][bj] = 1;
    if (matrix[bi - 1][bj] == 0) {
        dfs(bi - 1, bj, ei, ej);
    }
    if (matrix[bi][bj + 1] == 0) {
        dfs(bi, bj + 1, ei, ej);
    }
    if (matrix[bi + 1][bj] == 0) {
        dfs(bi + 1, bj, ei, ej);
    }
    if (matrix[bi][bj - 1] == 0) {
        dfs(bi, bj - 1, ei, ej);
    }

    matrix[bi][bj] = 0;
}
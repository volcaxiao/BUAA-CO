#include "iostream"
using namespace std;
int matrix[3][10][10];

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[0][i][j];
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[1][i][j];
            for (int k = 0; k < n; ++k) {
                matrix[2][k][j] += matrix[1][i][j]*matrix[0][k][i];
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << matrix[2][i][j] << " ";
        }
        cout << endl;
    }
}
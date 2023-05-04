#include "iostream"

using namespace std;
int convMatrix[15][15];
int convCore[15][15];
int outMatrix[15][15];

int main() {
    int m1, n1, m2, n2;
    cin >> m1 >> n1 >> m2 >> n2;
    for (int i = 0; i < m1; ++i) {
        for (int j = 0; j < n1; ++j) {
            cin >> convMatrix[i][j];
        }
    }
    for (int k = 0; k < m2; ++k) {
        for (int l = 0; l < n2; ++l) {
            cin >> convCore[k][l];
            for (int i = 0; i < m1-m2+1; ++i) {
                for (int j = 0; j < n1-n2+1; ++j) {
                    outMatrix[i][j] += convMatrix[i+k][j+l]*convCore[k][l];
                }
            }
        }
    }
    for (int i = 0; i < m1-m2+1; ++i) {
        for (int j = 0; j < n1-n2+1; ++j) {
            cout << outMatrix[i][j] << " ";
        }
        cout << endl;
    }
}
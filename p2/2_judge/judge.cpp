#include "iostream"

using namespace std;

int main(){
    int n;
    char a[23];
    int out = 1;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i <= (n-1)/2; ++i) {
        if(a[i] != a[n-1-i]){
            out = 0;
            break;
        }
    }
    cout << out;
}
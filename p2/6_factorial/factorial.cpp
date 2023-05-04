#include "iostream"
using namespace std;

int num[300] = {1};
int highest = 1;

int main(){
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        /*for (int j = highest-1; j >= 0; j--) {
            num[j] *=  i;
            int more_d;
            for (more_d = 0; num[j + more_d] != 0; ++more_d) {
                num[j+more_d+1] += num[j + more_d]/100000;
                num[j + more_d] = num[j + more_d] % 100000;
            }
            if (j + more_d > highest)
                highest = j + more_d;
        }*/
        int carry = 0;
        for (int j = 0; j < highest; ++j) {
            num[j] = num[j]*i +carry;
            carry = num[j]/1000000;
            num[j] %= 1000000;
        }
        if (carry>0){
            num[highest] = carry;
            highest++;
        }

    }
    cout << num[--highest];
    while (highest--){
        int tmp = num[highest];
        for (int i = 1; i < 6; ++i) {
            if ((tmp/=10)==0)
                cout << "0";//mips中可以一个字一个字输出
        }
        cout << num[highest];
    }
}
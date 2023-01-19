#include<iostream>
using namespace std;

bool checkin(int n) {
    int m = n;
    int tn = 0;
    while (n>0) {
        tn = tn * 10 + n % 10;
        n = n / 10;
    }
    return m == tn;
}
int main() {
    int k;
    cin >> k;
    for (int i = 10000000; i < 99999999; i++) {
        if (checkin(i) && i%k==0)
            cout << i << " ";
    }
    return 0;
}
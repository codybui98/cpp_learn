#include<iostream>
using namespace std;

int giaithua(int n) {
    long long giaithua=1;
    if (n == 0)
        giaithua = 0;
    else {
        for (int i = 0; i < n; i++) {
            giaithua *= (n - i);
        }
    }
    return giaithua;
}
int main() {
    int n;
    cin >> n;
    cout << n << "!" << " = " << giaithua(n) << endl;
    return 0;
}
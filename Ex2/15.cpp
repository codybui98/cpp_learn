#include <iostream>
#include <sstream>
using namespace std;

int tinhtong(string n) {
    int tong = 0, a;
    for (int i = 0; i < n.length(); i++) {
        // stringstream num(n);
        // num >> a;
        // cout << a;
        a = int(n[i]) - 48;
        tong += a;
    }
    return tong;
}
int main() {
    string n;
    cin >> n;
    cout << tinhtong(n);
}
#include<iostream>
using namespace std;

int main() {
    int n, tong;
    cin >> n;
    for (int i = 1; i < n+1; i++) {
        tong += i;
    }
    cout << tong;
    return 0;
}
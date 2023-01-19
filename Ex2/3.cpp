#include<iostream>
using namespace std;

int main() {
    int n;
    float s;
    cin >> n;
    for (int i = 1; i < n + 1; i++) {
        s += (float)1 / i;
    }
    cout << s;
    return 0;
}
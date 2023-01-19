#include<iostream>
using namespace std;

int main() {
    int n, k, s;
    cin >> n >> k;
    for (int i = 1; i < n; i++) {
        if (i%k==0)
            s += i;
    }
    cout << s;
    return 0;
}
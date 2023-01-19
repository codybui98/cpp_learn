#include<iostream>
#include<vector>

using namespace std;

int m, n, k;

int main() {
    while (m > 10 || n > 10 || m < 1 || n < 1) {
        cout << "Hay nhap kich thuoc: " << endl;
        cin >> m >> n;
    }
    while (k > 10 || k < 1) {
        cout << "Hay nhap so lan muon phong to: " << endl;
        cin >> k;
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            
        }
    }
    return 0;
}
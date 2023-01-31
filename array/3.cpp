#include<iostream>
using namespace std;

int main() {
    int q;
    cin >> q;
    while(q--) {
        int h, c;
        cin >> h >> c;
        int a[h][c] = {0};
        int b[10000] = {0};
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < c; j++) {
                cin >> a[i][j];
            }
        }
        int d = 0, x;
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < c; j++) {
                b[d] += a[i][j];
            }
            d++;
        }
        int max = INT_MIN;
        for (int i = 0; i < d; i++) {
            if (b[i] > max) {
                max = b[i];
            }
        }
        cout << max << endl;
        for (int i = 0; i < d; i++) {
            if (b[i] == max) {
                cout << i + 1 << " ";
            }
        }
    }
    return 0;
}
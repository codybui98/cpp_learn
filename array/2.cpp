#include<iostream>
using namespace std;

int main() {
    int q;
    cin >> q;
    while(q--) {
        int h, c;
        cin >> h;
        cin >> c;
        int a[h][c];
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < c; j++) {
                cin >> a[i][j];
            }
        }
        int max = INT_MIN;
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < c; j++) {
                if(a[i][j] > max)
                    max = a[i][j];
            }
        }
        cout << max << endl;
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < c; j++) {
                if(a[i][j] == max)
                    cout << "Vi tri xuat hien: A[" << i+1 << "][" << j+1 << "]" << endl;
            }
        }
    }

    return 0;
}
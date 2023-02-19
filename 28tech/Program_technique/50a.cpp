#include<iostream>
using namespace std;

int main() {
    int m, n, tong = 0;
    cin >> m >> n;
    int y =0;
    for (int i = 0; i < m; i++) {
        int x = 0;
        for (int j = 0; j < n; j++) {
            x++;
        }
        if(x%2!=0) {
            tong += (x-1)/2;
            y++;
        }
        else {
            tong += x / 2;
            y=0;
        }
        if(y%2==0) {
            tong++;
            y = 0;
        }
    }
    cout << tong;
    return 0;
}
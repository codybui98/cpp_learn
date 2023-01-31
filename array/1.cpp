#include<iostream>
#include<map>
#include<math.h>
using namespace std;

bool soNguyenTo(int x) {
    for (int i = 2; i <= sqrt(x); i++) {
        if(x%i==0)
            return false;
    }
    return x > 1;
}

int main() {
    int q;
    cin >> q;
    while (q--) {
        int h, c;
        cin >> h;
        cin >> c;
        int a[h][c] = {0};
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < c; j++) {
                cin >> a[i][j];
            }
        }
        map<int, bool> mp; // khai bao cau truc map 
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < c; j++) {
                if(mp[a[i][j]] == 0 && soNguyenTo(a[i][j])) // dieu kien ko gap lai va so nguyen to
                    cout << a[i][j] << " ";
                    mp [a[i][j]] = 1;
            }
        }
    }
    return 0;
}
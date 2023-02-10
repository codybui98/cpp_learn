#include<bits/stdc++.h>
#include <set>
using namespace std;

set<long long> fibo; // STL

void init() {
    long long f[93];
    f[0] = 0;
    f[1] = 1;
    for (int i = 2; i < 93; i++) {
        f[i] = f[i - 1] + f[i - 2];
    }
    for (int i = 0; i < 93; i++) {
        fibo.insert(f[i]);
    }
} // Ham tim so fibo

int main() {
    int q;
    cin >> q;
    init();
    // for (long long x : fibo) {
    // 	cout << x << endl;
	// }
    while(q--) {
        int h, c;
        cin >> h >> c;
        long long a[h][c];
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < c; j++) {
                cin >> a[i][j];
            }
        }
        // for (int i = 0; i < h; i++) {
        //     for (int j = 0; j < c; j++) {
        //         cout << a[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        int max = -1, cot;
        long long sum = 0;
        for (int i = 0; i < c; i++) {
            int dem = 0;
            long long tmp = 0;
            for (int j = 0; j < h; j++) {
                if(fibo.count(a[j][i])==1) {
                    ++dem;
                    tmp += a[j][i];
                }
            }
            if(dem > max) {
                cot = i;
                max = dem;
                sum = tmp;
            }
            else if(dem == max) {
                if(sum < tmp) {
                    cot = i;
                    sum = tmp;
                }
            }
        }
         cout << cot + 1 << endl;
//        cout << dem << endl;
        for (int i = 0; i < h; i++) {
            if(fibo.count(a[i][cot])==1) {
                cout << a[i][cot] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}

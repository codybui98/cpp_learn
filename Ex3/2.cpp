#include<iostream>
using namespace std;

void vehinh(int x, int y) {
    for (int i = 0; i < y; i++) {
        if (i == 0 || i == y-1) {
            for (int j = 0; j < x; j++) {
                cout << " * ";
            }
            cout << endl;
        }
        else {
            for (int j = 0; j < x; j++) {
                if (j == 0 || j == x-1)
                    cout << " * ";
                else
                    cout << "   ";
            }
            cout << endl;
        }
    }
}
int main() {
    int x, y;
    cin >> x >> y;
    vehinh(x, y);
    return 0;
}
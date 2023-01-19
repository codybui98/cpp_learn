#include<iostream>
using namespace std;

void vehinh(int h) {
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < i + 1; j++) {
            cout << " * ";
        }
        cout << endl;
    }
}
int main() {
    int h;
    cin >> h;
    vehinh(h);
    return 0;
}
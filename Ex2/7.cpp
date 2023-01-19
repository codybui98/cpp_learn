#include<iostream>
using namespace std;

int main() {
    int n, cnt;
    cin >> n;
    for (int i = 2; i < n; i++) {
        if(n%i==0) {
            cout << i << " ";
            cnt++;
        }
    }
    cout << endl;
    cout << cnt;
    return 0;
}
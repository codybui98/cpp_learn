#include<iostream>
using namespace std;

int main() {
    int n,s1=1, s=0;
    cin >> n;
    for (int i = 1; i < n + 1; i++) {
        s1 = s1 * i;
        s += s1;
    }
    cout << s;
    return 0;
}
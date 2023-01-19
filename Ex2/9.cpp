#include<iostream>
using namespace std;

int checkin(int a) {
    int cnt = 0;
    bool x;
    for (int i = 1; i < a+1; i++) {
        if (a%i==0)
            cnt++;
    }
    if (cnt == 2)
        x = true;
    else
        x = false;
    return x;
}
int main() {
    int a;
    cin >> a;
    if (checkin(a))
        cout << a << " La so nguyen to" << endl;
    else
        cout << a << " Ko phai la so nguyen to" << endl;
    // return 0;
}
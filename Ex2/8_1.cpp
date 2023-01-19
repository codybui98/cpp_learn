#include<iostream>
using namespace std;

int UCLN(int a, int b) {
    while (a!=b) {
        if(a>b)
            a = a - b;
        else
            b = b - a;
    }
    return a;
}
int BCNN(int a, int b, int result) {
    int tich = a * b;
    return (tich / result);
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << "UCLN: " << UCLN(a, b) << endl;
    cout << "BCNN: " << BCNN(a, b, UCLN(a, b)) << endl;
    return 0;
}
#include<iostream>
using namespace std;

int gcd(int a, int b) {
    cout << "gcd(" << a << ", " << b << ")" << endl;
    if(b==0)
        return a;
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    cout << "lcm(" << a << ", " << b << ")" << endl;
    if(a==0)
        return 0;
    return (a*b)/gcd(a,b);
}

int main() {
    int a,b;
    cin >> a >> b;
    cout << lcm(a,b) << endl;
    return 0;
}
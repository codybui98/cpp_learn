#include<iostream>
using namespace std;

using ll = long long;
ll gcd(ll a, ll b) {
    int cnt = 0;
    if(b==0) 
        return a;   
    return gcd(b, b % a);
}

int main() {
    int a[10];
    int c = 0;
    for (int i = 0; i < 11; i++) {
        a[i] = i;
    }
    for (int i = 0; i < 11; i++) {
        c = gcd(2, a[i]);
        if(c == a[i])
            cout << a[i] << " " << endl;
    }
        return 0;
}
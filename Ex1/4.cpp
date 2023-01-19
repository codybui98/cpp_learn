#include<iostream>
using namespace std;

int main() {
    int m, n;
    cout << "Hay nhap vao 2 so nguyen m,n: ";
    cin >> m >> n;
    if(m > n)
        cout << m << ">" << n;
    else if (m<n)
        cout << m << "<" << n;
    else if (m==n)
        cout << m << "=" << n;
    return 0;
}
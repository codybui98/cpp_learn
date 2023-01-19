#include<iostream>
#include<cmath>
using namespace std;

int main() {
    float r;
    cout << "Hay nhap ban kinh duong tron: ";
    cin >> r;
    cout << "Ban kinh duong tron:" << 2 * M_PI * r << endl;
    cout << "Dien tich duong tron:" << M_PI * pow(r,2) << endl;
    return 0;
}
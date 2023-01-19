#include<iostream>
using namespace std;

void chuoi(string n) {
    int tong = 0;
    int so = 0, k = 2, so1;
    for (int i = 0; i < n.length(); i++) {
        char a = n[i];
        so = so * 10 + (int(a)-48);
        tong += (int(a)-48);
    }
    so1 = so;
    while(so!=1) {
        if(so%k==0) {
            so = so / k;
            cout << k << " ";
        }
        else
            k++;
    }
    cout << endl;
    cout << tong << " " << so1 << endl;
}

int main() {
    string n;
    cin >> n;
    chuoi(n);
    return 0;
}
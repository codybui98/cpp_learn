#include<iostream>
using namespace std;

int main() {
    int x, y, z, tong=0, i=2, j= 2, k =2;
    cin >> x >> y >> z;
    while(x!=1) {
        if(x%i==0) {
            tong += i;
            x = x / i;
        }
        else
            i++;
    }
    while(y!=1) {
        if(y%j==0) {
            tong += j;
            y = y / j;
        }
        else
            j++;
    }
    while(z!=1) {
        if(z%k==0) {
            tong += k;
            z = z / k;
        }
        else
            k++;
    }
    cout << tong*2 << endl;
    return 0;
}
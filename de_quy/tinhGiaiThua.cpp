#include<iostream>
using namespace std;

int giaiThua(int n) {
    if(n==0 || n==1)
        return 1;
    else {
        return n * giaiThua(n - 1);
    }
}

int main() {
    int n;
    cin >> n;
    cout << giaiThua(n) << endl;
    return 0;
}
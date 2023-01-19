#include<iostream>
using namespace std;

void phantich(int a) {
    int i = 2, c = 0;
    int *array = new int[10];
    while (a!=1) {
        if (a % i == 0 ) {
            a = a / i;
            array[c] = i;
            c++;
        }
        else
            i = i + 1;
    }
    for (int x = 0; x < c; x++) {
        cout << "x" << array[x];
    }
}
int main() {
    int a;
    cin >> a;
    phantich(a);
    return 0;
}
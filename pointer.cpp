#include<iostream>
using namespace std;
// a pointer is just the variable that contains value of address
int main() {
    int someArray[10] = {1,2,3,4,5,6,7,8,9,10};

    int *p1 = someArray;
    // int *p2 = &someArray[0];

    // cout << (int)*p1 << endl;
    // cout << (int)*p2 << endl;

    for (int i = 0; i < 10; i++) {
        // cout << p1 + i << " = " << someArray[i] <<endl;
        cout << p1 << " = " << *p1 + i <<endl;
    }
    return 0;
}
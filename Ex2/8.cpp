#include <iostream>
using namespace std;

int main() {
    int m, n, n1, n2, c1=0, c2=0, i=2, j=2;
    int *array1 = new int[10];
    int *array2 = new int[10];
    cin >> m >> n;
    while (m!=1) {
        if (m%i==0) {
            m = m / i;
            cout << i << " ";
            array1[c1] = i;
            c1++;    
        }
        else
            i++;
    }
    while (n!=1) {
        if (n%j==0) {
            n = n / j;
            cout << j << " ";
            array2[c2] = j;
            c2++;
        }
        else
            j++;
    }
    
    return 0;
}
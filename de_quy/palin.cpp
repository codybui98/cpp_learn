#include<iostream>
using namespace std;

int palin(int a[], int l, int r) {
    if(l>=r)
        return true;
    if(a[l]!=a[r])
        return false;
    return palin(a, l + 1, r - 1);
}
int main() {
    int n;
    cin >> n;
    int a[n];
    for(int &x : a) {
        cin >> x;
    }
    if(palin(a,0,n-1))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
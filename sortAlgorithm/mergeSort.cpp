#include<bits/stdc++.h>
using namespace std;

// mergeSort complexity O(nlogn) -> fast
//--------------Mix Function--------------//
void merge(int a[], int l, int m, int r) {
    vector<int> x(a + l, a + m + 1);
    vector<int> y(a + m + 1, a + r + 1);
    int i = 0;
    int j = 0;
    while(i<x.size() && j < y.size()) {
        if(x[i] >= y[j]) {
            a[l] = x[i];
            ++l;
            ++i;
        }
        else {
            a[l] = y[j];
            ++l;
            ++j;
        }
    }
    while(i<x.size()) {
        a[l] = x[i];
        ++l;
        ++i;
    }
    while(j<y.size()) {
        a[l] = y[j];
        ++l;
        ++j;
    }
}
//--------------/Mix Function--------------//
//--------------Sort Function-------------//
void mergeSort(int a[], int l, int r) {
    if(l>=r) {
        return;
    }
    int m = (l + r) / 2;
    mergeSort(a, l, m);
    mergeSort(a, m + 1, r);
    merge(a, l, m, r);
}
int main() {
    int n;
    cin >> n;
    int a[10];
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        // a[i] = rand() % 1000;
        cin >> a[i];
    }
    mergeSort(a, 0, n - 1);
    for (int x : a) {
        cout << x << " ";
    }
    return 0;
}

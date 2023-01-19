#include<iostream>
using namespace std;

int main() {
    int a[5] = {};
    int max, f=0;
    cout << "Hay nhap vao 5 so nguyen: ";
    for (int i = 0; i < 5; i++) {
        cin >> a[i];
    }
    max = a[0];
    for (int i = 0; i < 5; i++) {
        if (max < a[i])
            max = a[i];
        if (max == a[i])
            f++;
    }
    if(f==5)
        cout << "Khong co so lon nhat";
    else 
        cout << "So lon nhat la: " << max << endl;
}
#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int a, b, c;
    float delta;
    cout << "Nhap 3 ghe so a,b,c: ";
    cin >> a >> b >> c;
    delta = b*b - 4 * a * c;
    if(delta < 0)
        cout << "Ptr vo nghiem";
    else if (delta == 0)
        cout << "Ptr co nghiem kep: "<< "x1=x2=" << (float)(-b/2*a);
    else if (delta > 0) {
        cout << "Ptr co 2 nghiem:" << endl;
        cout << "x1 = " << (float)((-b + sqrt(delta)) / 2*a) << endl;
        cout << "x2 = " << (float)((-b - sqrt(delta)) / 2*a) << endl;
    }
    return 0;
}
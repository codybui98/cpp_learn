#include<iostream>
using namespace std;

using ll = long long;

ll gcd(ll a, ll b) {
    if(b==0)
        return a;
    return gcd(b, a%b);
} 

class PhanSo {
    private:
        ll tu, mau;
    public:
        PhanSo(ll tu, ll mau); //Ham constructor mac dinh khoi tao
        friend ostream& operator<<(ostream &, PhanSo); // toan tu chong xuat
        friend istream &operator>>(istream &, PhanSo &); // toan tu chong nhap
        void rutgon();
};
PhanSo::PhanSo(ll tu, ll mau) {
        this->tu = tu;
        this->mau = mau;
}
ostream& operator <<(ostream& out, PhanSo a) {
        out << a.tu << "/" << a.mau;
        return out;
} // toan tu chong xuat
istream& operator >>(istream& in, PhanSo &a) {
        in >> a.tu >> a.mau;
        return in;
} // toan tu chong nhap
void PhanSo::rutgon() {
        ll g = gcd(tu, mau);
        tu /= g;
        mau /= g;
}
int main() {
        PhanSo p(0, 0);
        cin >> p;
        p.rutgon();
        cout << p;
        return 0;
}
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

class SinhVien {
    private:
        string mssv, ten, lop, email;
    public:
        SinhVien();
        friend ostream &operator<<(ostream &, SinhVien);
        friend istream &operator>>(istream &, SinhVien &);
        string getLop();
};
SinhVien::SinhVien() {
        this->mssv = " ";
        this->ten = " ";
        this->lop = " ";
        this->email = " ";
}
string SinhVien::getLop() {
        return this->lop;
}
ostream &operator << (ostream &out, SinhVien a) {
        out << a.mssv << " " << a.ten << " " << a.lop << " " << a.email;
        return out;
}

istream &operator >> (istream &in, SinhVien &a) {
        in >> a.mssv;
        in.ignore();
        getline(in, a.ten);
        in >> a.lop >> a.email;
        return in;
}
bool cmp (SinhVien a, SinhVien b) {
        return a.getLop() < b.getLop();
}
int main() {
    int n;
    cin >> n;
    SinhVien a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a+n, cmp);
    for(SinhVien x:a) {
        cout << x;
    }
    return 0;
}
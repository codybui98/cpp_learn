#include<iostream>
#include<string>
using namespace std;

class SinhVien{
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
ostream& operator << (ostream& out, SinhVien a) {
    out << a.mssv << " " << a.ten << " " << a.lop << " " << a.email << endl;
    return out;
}
istream& operator >> (istream& in, SinhVien &a) {
    in >> a.mssv;
    in.ignore();
    getline(in, a.ten);
    in >> a.lop >> a.email;
    return in;
}
string SinhVien::getLop() {
    return this->lop;
}
int main() {
    int n;
    cin >> n;
    SinhVien a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int q = 0;
    cin >> q;
    while(q--) {
        string k;
        cin >> k;
        cout << "Danh sach sinh vien lop " << k << endl;
        for (SinhVien x:a) {
            if(x.getLop()==k)
                cout << x;
        }
    }
    return 0;
}
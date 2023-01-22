#include<iostream>
#include<string>
using namespace std;

class SinhVien {
    private:
        string mssv, ten, lop, email;
    public:
        SinhVien();
        friend ostream &operator<<(ostream &, SinhVien);
        friend istream &operator>>(istream &, SinhVien &);
        string getMSSV();
};
SinhVien::SinhVien() {
    this->mssv = " ";
    this->ten = " ";
    this->lop = " ";
    this->email = " ";
}
ostream& operator << (ostream &out, SinhVien a) {
    out << a.mssv << " " << a.ten << " " << a.lop << " " << a.email << endl;
    return out;
}
istream& operator >> (istream &in, SinhVien &a){
    in >> a.mssv;
    in.ignore();
    getline(in, a.ten);
    in >> a.lop >> a.email;
    return in;
}
string SinhVien::getMSSV() {
    return this->mssv;
}
int main() {
    int n;
    cin >> n;
    SinhVien a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int q;
    cin >> q;
    while(q--) {
        string k;
        cin >> k;
        cout << "DANH SACH SINH VIEN KHOA 20" << k << endl;
        for (SinhVien x:a) {
            if (x.getMSSV()[1]==k[0] && x.getMSSV()[2]==k[1])
                cout << x;
        }
    }
    return 0;
}
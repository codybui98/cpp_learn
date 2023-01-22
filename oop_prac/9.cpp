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
        string get_MSSV();
};
SinhVien::SinhVien() {
    this->mssv = " ";
    this->ten = " ";
    this->lop = " ";
    this->email = " ";
}
ostream &operator << (ostream& out, SinhVien a) {
    out << a.mssv << " " << a.ten << " " << a.lop << " " << a.email << endl;
    return out;
}
istream &operator >> (istream& in, SinhVien &a) {
    in >> a.mssv;
    in.ignore();
    getline(in, a.ten);
    in >> a.lop >> a.email;
    return in;
}
string SinhVien::get_MSSV() {
    return this->mssv;
}
string rutgon(string k) {
    if (k == "Ke toan") {
        k = "DCKT";
    }
    else if(k == "Cong nghe thong tin") {
        k = "DCCN";
    }
    else if(k == "An toan thong tin") {
        k = "DCAT";
    }
    else if(k == "Vien thong") {
        k = "DCVT";
    }
    else if(k == "Dien tu") {
        k = "DCDT";
    }
    return k;
}
// string viethoa(string &s) {
//     for (char &x : s)
//         x = toupper(x);
// }
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
        string k, z;
        cin >> k;
        z = rutgon(k);
        // viethoa(k);
        cout << "DANH SACH SINH VIEN NGANH " << k  << endl;
        for (SinhVien x:a) {
            if(string(x.get_MSSV()[3]+x.get_MSSV()[4]+x.get_MSSV()[5]+x.get_MSSV()[6])==z) {
                cout << x << endl;
            }
        }
    }
    return 0;
}
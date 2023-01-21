#include<iostream>
#include<string>
using namespace std;

class SinhVien {
    private:
        string mssv, ten, lop, ns;
        float gpa;
    public:
        SinhVien();
        SinhVien(string ten, string lop, string ns, float gpa);
        friend ostream &operator<<(ostream &, SinhVien);
        friend istream &operator>>(istream &, SinhVien &);
};
SinhVien::SinhVien() {
        this->mssv = " ";
        this->ten = " ";
        this->lop = " ";
        this->ns = " ";
        this->gpa = 0;
}
SinhVien::SinhVien(string ten, string lop, string ns, float gpa) {
    if(ns[2]!='/')
        ns = "0" + ns;
    if(ns[5]!='/')
        ns = ns.insert(3, "0");
    this->mssv = "B2DCCN001";
    this->ten = ten;
    this->lop = lop;
    this->ns = ns;
    this->gpa = gpa;
}   
ostream &operator << (ostream& out, SinhVien a) {
        out << a.mssv << " " << a.ten << " " << a.lop << " " << a.ns << " " << a.gpa;
        return out;
}
istream &operator >> (istream& in, SinhVien &a) {
        a.mssv = "B2DCCN001";
        getline(in, a.ten);
        in >> a.lop >> a.ns >> a.gpa;
        if(a.ns[2]!='/')
            a.ns = "0" + a.ns;
        if(a.ns[5]!='/')
        a.ns = a.ns.insert(3, "0");
        return in;
}
#define a() a
int main() {
    SinhVien a();
    cin >> a;
    cout << a;
    return 0;
}
#include<iostream>
#include<string>
using namespace std;

class SinhVien {
    private:
        string mssv, ten, lop, ns;
        float gpa;
    public:
        SinhVien();
        friend void nhap(SinhVien &);
        friend void in(SinhVien);
};
SinhVien::SinhVien() {
        this->mssv = " ";
        this->ten = " ";
        this->lop = " ";
        this->ns = " ";
        this->gpa = 0;
}
void nhap(SinhVien &a) {
        a.mssv = "B20DCCN001";
        getline(cin, a.ten);
        cin >> a.lop >> a.ns >> a.gpa;
        if(a.ns[2] !='/')
            a.ns = "0" + a.ns;
        if(a.ns[5] != '/')
            a.ns.insert(3, "0");
}
void in(SinhVien a) {
        cout << a.mssv << " " << a.ten << " "  << a.lop << " "  << a.ns << " "  << a.gpa;
}

#define a() a

int main() {
        SinhVien a();
        nhap(a);
        in(a);
        return 0;
}
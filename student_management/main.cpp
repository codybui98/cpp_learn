#include<iostream>
using namespace std;

class SinhVien {
    private:
        string id, ten, ns;
        double gpa;
    public:
        void nhap();
};
void yeucau() {
        cout << "---------------------------------------------------------" << endl;
        cout << "--------------------CAC CHUC NANG------------------------" << endl;
        cout << "(1) Them sinh vien vao danh sach" << endl;
        cout << "(2) Hien thi toan bo danh sach sinh vien" << endl;
        cout << "(3) Tim kiem sinh vien theo mssv" << endl;
        cout << "(4) Liet ke cac sinh vien co diem gpa cao nhat" << endl;
        cout << "(5) Liet ke sinh vien co gpa >= 2.5 theo thu tu giam dan" << endl;
        cout << "(6) Sap xep theo ten" << endl;
        cout << "(7) Sap xep sinh vien theo lop theo thu tu dien" << endl;
        cout << "(8) Sap xep sinh vien theo lop theo thu tu gpa giam dan" << endl;
        cout << "---------------------------------------------------------" << endl;
        cout << "--------------------MOI BAN NHAP YEU CAU-----------------" << endl;
}
void SinhVien::nhap() {
    cout << "Nhap mssv: ";
    cin >> this->id;
    cin.ignore();
    cout << "Nhap ten: ";
    cin >> this->ten;
    cout << "Nhap ngay sinh: ";
    cin >> this->ns;
    cout << "Nhap diem: ";
    cin >> this->gpa;
}
int main() {
    int lenh;
    yeucau();
    cout << "Nhap lenh:";
    cin >> lenh;
    return 0;
}
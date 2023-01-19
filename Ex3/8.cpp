#include<iostream>
using namespace std;

void ktraThuanNghich(int so) {
    int m = so;
    int n;
    while(so!=0) {
        n = n * 10 + so % 10;
        so = so / 10;
    }
    if (n==m)
        cout << "Day la so thuan nghich" << endl;
    else
        cout << "Day ko phai so thuan nghich" << endl;
}
void demso(string n) {
    int cnt_l=0, cnt_c=0, so=0;
    for (int i = 0; i < n.length(); i++) {
        char a = n[i];
        so = so * 10 + (int(a)-48);
        int tn = int(a)-48;
        if(tn%2 == 0)
            cnt_c++;
        else
            cnt_l++;
    }
    cout << cnt_c << " " << cnt_l << endl;
    ktraThuanNghich(so);
}
int main() {
    string n;
    cin >> n;
    demso(n);
    return 0;
}
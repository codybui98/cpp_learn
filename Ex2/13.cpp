#include<iostream>
using namespace std;

int main() {
    string a;
    int cnt=0;
    cin >> a;
    cout << a[a.length() - 1] << endl;
    for (int i = 0; i < a.length(); i++) {
        if(a[i]==a[a.length()-i-1])
            cnt++;
        if(cnt == a.length()/2) {
            cout << cnt << endl;
            cout << (float)a.length()/2 << endl;
            cout << "Day la so thuan nghich" << endl;
            break;
        }
    }
    return 0;
}
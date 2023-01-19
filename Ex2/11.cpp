#include<iostream>
using namespace std;

void myFucn(int a) {
    int cnt1 , cnt2;
    while(cnt1 < a) {
        for (int i = 2; i < 255; i++) {
            cnt2 = 0;
            for (int j = 1; j < i+1; j++) {
                if(i%j==0)
                    cnt2++;
            }
            if(cnt2==2) {
                cnt1++;
                cout << i << " ";
            }
            if(cnt1 == a)
                break;
        }
    }
}
int main() {
    int a;
    cin >> a;
    myFucn(a);
    return 0;
}
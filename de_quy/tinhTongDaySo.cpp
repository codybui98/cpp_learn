// theo kieu du lieu stack or priority queue
#include<iostream>
using namespace std;

int tong(int n) {
    if(n==1)
        return 1; // dieu kien dung
    return n = n + tong(n - 1); // bai toan de quy 
}

int main() {
    int n;
    cin >> n;
    cout << tong(n) << endl;
    return 0;
}
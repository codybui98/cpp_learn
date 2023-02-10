#include<bits/stdc++.h>
using namespace std;

int solution(vector<int> &A, vector<int> &B) {
    int n = A.size();
    int m = B.size();
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    int i = 0;
    for (int k = 0; k < n; k++) {
        if (i < m - 1 && B[i] < A[k])
            i++;
        if (A[k] == B[i])
            return A[k];
    }
    return -1;
}
int main() {
//	vector<int> a;
//	vector<int> b;
//	int x;
//	a.push_back(1);
//	a.push_back(3);
//	a.push_back(2);
//	a.push_back(1);
//	b.push_back(4);
//	b.push_back(3);
//	b.push_back(5);
//	b.push_back(3);
//	b.push_back(2);
//	x = solution(a,b);
//	cout << x;
	set<int> s;
	s.insert(1);
	s.insert(3);
	s.insert(5);
	s.insert(7);
	s.insert(8);
	s.insert(9);
	
	s.erase(5);
	s.insert(9);
	s.insert(10);
	for(int x : s) 
		cout << x;
	return 0;
}

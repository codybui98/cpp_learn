// priority queue
#include<bits/stdc++.h>
using namespace std;

// binary tree
// max heap (heapify) 
// priority queue

void heapify(int arr[], int n, int i) {
    int largest = i;
    int left = i * 2 + 1;
    int right = i * 2 + 2;
    if(left <=n && arr[left] > arr[largest]) {
        largest = left;
    }
    if(right <=n && arr[right] > arr[largest]) {
        largest = right;
    }
    if(largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }
    for (int i = n-1; i >= 0; --i) {
        swap(arr[i], arr[0]);
        heapify(arr, i-1, 0);
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    heapSort(a, n);
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
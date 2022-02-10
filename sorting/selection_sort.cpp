#include <iostream>
using namespace std;


void selectionSort(int a[], int n) {
    for (int i = 0; i < n; i++) {
        int curr = a[i];
        int minIdx = i;
        for (int j = i; j < n; j++) {
            if (a[j] < a[minIdx]) {
                minIdx = j;
            }
        }
        swap(a[minIdx], a[i]);
    }
}

int main() {
    int arr[] = {-1, 2, 3,-1, 22,15,10, 6};
    int n = sizeof(arr)/sizeof(int);
    selectionSort(arr, n);
    for (auto x : arr) {
        cout << x << " ";
    }    

    return 0;
}
#include <iostream>
using namespace std;


void insertionSort(int a[], int n) {
    for (int i = 1; i < n; i++) {
        int currNum = a[i];
        int prevIdx = i - 1;
        while (prevIdx >= 0 && a[prevIdx] > currNum ) {
            a[prevIdx + 1] = a[prevIdx];
            prevIdx --;
        }

        a[prevIdx + 1] = currNum; 
    }
}

int main() {
    int arr[] = {-1, 2, 3,-1, 22,15,10, 6};
    int n = sizeof(arr)/sizeof(int);
    insertionSort(arr, n);
    for (auto x : arr) {
        cout << x << " ";
    }    

    return 0;
}
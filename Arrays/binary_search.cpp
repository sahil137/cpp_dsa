#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int num) {
    int start = 0;
    int end = n - 1;

    while (start <= end) {
        int mid = (start + end) / 2;
        if (arr[mid] == num) {
            return mid;
        } else if (arr[mid] > num) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 5, 18, 24, 30, 36, 38, 88, 109};
    int n = sizeof(arr)/sizeof(int);
    int num;
    cout << "Enter the number" << endl;
    cin >> num;
    int idx = binarySearch(arr, n, num);
    cout << idx << endl;
}
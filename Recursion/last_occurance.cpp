#include <iostream>
using namespace std;

int lastOccurance(int arr[], int n, int i, int k) {
    if (i == n) {
        return -1;
    }
    int idx = lastOccurance(arr, n, i + 1, k);
    if (idx == -1) {
        if (arr[i] == k) {
            return 0;
        } else {
            return -1;
        }
    }
    return idx + 1;
}

int main () {
    int n, k;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> k;

    int firstIdx = lastOccurance(arr, n, 0, k);

    cout << firstIdx <<endl;

}
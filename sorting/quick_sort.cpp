#include<iostream>
#include <vector>
using namespace std;


void quickSort(vector<int> &array, int startIdx, int endIdx) {
    if (startIdx >= endIdx) {
        return;
    }
    int pivotIdx = startIdx;
    int leftIdx = startIdx + 1;
    int rightIdx = endIdx;

    while (leftIdx <= rightIdx) {
        if (array[leftIdx] > array[pivotIdx] and array[rightIdx] < array[pivotIdx]) {
            swap(array[leftIdx], array[rightIdx]);
        }

        if (array[leftIdx] <= array[pivotIdx]) {
            leftIdx ++;
        }

        if (array[rightIdx] >= array[pivotIdx]) {
            rightIdx --;
        }
    }

    swap(array[rightIdx], array[pivotIdx]);

    quickSort(array, startIdx, rightIdx - 1);
    quickSort(array, rightIdx + 1, endIdx);


}

int main() {
    vector<int> arr{10,5,2,0,7,6,4};

    int start = 0;
    int end = arr.size() - 1;

    quickSort(arr, start, end);

    for (int x : arr) {
        cout << x << " ";
    }
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &array, int start, int end) {
    int i = start;
    int mid = (start + end) / 2;
    int j = mid + 1;

    vector<int> temp;

    while (i <= mid && j <= end) {
        if (array[i] < array[j]) {
            temp.push_back(array[i]);
            i++;
        } else {
            temp.push_back(array[j]);
            j++;
        }
    }

    while (i <= mid) {
        temp.push_back(array[i]);
        i++;
    }

        while (j <= end) {
        temp.push_back(array[j]);
        j++;
    }

    int k = 0;
    for (int idx = start; idx <= end; idx++) {
        array[idx] = temp[k];
        k++;
    }

    return;

}

void mergeSort(vector<int> &array, int start, int end) {
    //base case
    if (start >= end) {
        return;
    }

    int mid = (start + end) / 2;
    mergeSort(array, start, mid);
    mergeSort(array, mid + 1, end);

    merge(array, start, end);
}

int main() {
    vector<int> arr{10,5,2,0,7,6,4};

    int start = 0;
    int end = arr.size() - 1;

    mergeSort(arr, start, end);

    for (int x : arr) {
        cout << x << " ";
    }
    return 0;
}
#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int array[] = {10,34,61,347,73,23};
    int n = sizeof(array)/sizeof(int);

    int key;

    cout << "Enter number to be searched";
    cin >> key;

    int idx = linearSearch(array, n, key);
    if (idx != -1){
        cout << key << " is present"<< endl;
    } else {
        cout << key << " is not present" << endl;
    }
    return 0;
}
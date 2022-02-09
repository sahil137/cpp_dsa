#include <iostream>
using namespace std;

// pass by reference array variable will contain address
// void printArray(int * array or int array[]) both ways are fine since it is an pointer variable
// if we try to calculate the value length of array it will not work instead we should pass length of array as paramter
void printArray(int array[], int n) {
    cout << "In Function" << n << endl;
}


int main () {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr)/sizeof(int);
    cout << "In main" << sizeof(arr)/sizeof(int) << endl;
    printArray(arr, n);
    return 0;
}
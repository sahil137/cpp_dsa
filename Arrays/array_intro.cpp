#include<iostream>
using namespace std;

int main() {
    int marks[10] = {-1};
    int n;
    cout << "Enter number of students";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> marks[i];
    }

    for (int i = 0; i < 100; i++) {
        cout << marks[i] << " ,";
    }

    cout << endl;

    return 0;
}
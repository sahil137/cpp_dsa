#include<iostream>
using namespace std;

int main() {
    int a = 15;
    int * x = &a;
    int &y = a;
    cout << a << endl;
    cout << y << endl;
    cout << y << endl;
    cout << &a << endl;
    cout << x << endl;
}
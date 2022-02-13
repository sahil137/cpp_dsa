#include<iostream>
#include "Vector.h";
using namespace std;
// Vector class implemented in Vector.h

int main() {
    Vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    cout << v.size() << endl;
    cout << v.capacity() << endl;
    cout << v.at(3) << endl;

    return 0;
}
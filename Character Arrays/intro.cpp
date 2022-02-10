#include <iostream>
#include <cstring>
using namespace std;

int main() {
    // char a[100];
    // char a[100] = {'a', 'b', 'c'}; // not recommended
    // char a[100] = {'a', 'b', 'c', '\0'}; //  terminated by null character the right way
    // char a[100] = "abc"; // automatically end with null character

    char a[] = "abcdefg";
    char b[100];
    cin >> b;
    cout << b << endl;
    cout << a << endl;

    char ch;
    ch = cin.get();

    while(ch != '\n') {
        ch = cin.get();
    }

    cout << strlen(a) << endl; // number of visible character
    cout << sizeof(a) << endl; // adds null character by default

}
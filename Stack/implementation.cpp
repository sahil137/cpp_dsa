#include<iostream>
// #include"stack_using_LL.h"
// #include "stack_vector.h"
#include <stack>
#include<string>
using namespace std;

int main() {
    // Stack<char> st;
    stack<string> books;

    books.push("C++");
    books.push("JAVA");
    books.push("Python");
    books.push("OS");


    while (!books.empty()) {
        cout << books.top() << endl;
        books.pop();
    }


    // st.push('l');
    // st.push('i');
    // st.push('h');
    // st.push('a');
    // st.push('s');

    // while (!st.isEmpty()) {
    //     cout << st.top() << endl;
    //     st.pop();
    // }

}
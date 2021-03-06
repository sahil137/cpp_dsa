#include<iostream>
#include <stack>
using namespace std;

void insert_at_bottom(stack<int> &s, int data) {
    if (s.empty()) {
        s.push(data);
        return;
    }

    int top = s.top();
    s.pop();

    insert_at_bottom(s, data);

    s.push(top);

}

void reverse(stack<int> &s) {
    if (s.empty()) {
        return;
    }

    int top = s.top();
    s.pop();

    reverse(s);

    insert_at_bottom(s, top);

}

int main () {
    stack<int> st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    // insert_at_bottom(st, 6);
    reverse(st);

    while (!st.empty()) {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}

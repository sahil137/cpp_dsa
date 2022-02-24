#include <iostream>
#include "queue.h";
using namespace std;


int main() {
    Queue queue(7);

    queue.push(1);
    queue.push(2);
    queue.push(3);
    queue.push(4);
    queue.push(5);
    queue.push(6);


    while (!queue.empty()) {
        cout << queue.getFront() << endl;
        queue.pop();
    }


}
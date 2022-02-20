#include<iostream>
#include"list.h"
using namespace std;

int main () {
    List list;

    list.push_front(1);
    list.push_front(0);
    list.push_back(2);
    list.push_back(3);
    list.push_back(4);

    list.insert(20,4);
    list.print();
    list.pop_front();
    list.print();
    list.delete_pos(2);
    list.print();
    cout << "Idx: " <<  list.search(4) << endl;
    cout << "Idx: " <<  list.recursiveSearch(4) << endl;
    cout << list.size() << endl;
    return 0;
}
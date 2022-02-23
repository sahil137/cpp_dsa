#include<vector>
using namespace std;

template<typename T>
class Stack{
    vetor<T> array;
    public:
    void push(T data) {
        array.push_back(data);
    }
    void pop() {
        array.pop_back();
    }
    T top() {
        int lastIdx = array.size() - 1;
        return arr[lastIdx];
    }

    boolean emplty() {
        return array.size() == 0;
    }

};
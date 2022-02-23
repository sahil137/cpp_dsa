// #include<iostream>
// using namespace std

template<typename T>
class Stack;

template<typename T>
class Node{
    public:
    T data;
    Node<T>* next;

    Node(T d) {
        data = d;
    }
};
template<typename T>
class Stack{
    Node<T>* head;
    public:

    Stack() {
        head = nullptr;
    }

    void push(T data) {
        Node<T>* newNode = new Node<T>(data);
        newNode -> next = head;
        head = newNode;
    }

    bool isEmpty() {
        return head == nullptr;
    }

    T top() {
        if (!isEmpty()) {
            return head -> data; 
        }
    }

    void pop() {
        if (head != nullptr) {
            Node<T>* temp = head;
            head = head -> next;
            delete temp;
        }
    }

};
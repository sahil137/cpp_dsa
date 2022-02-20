using namespace std;
#include<iostream>
// forward declaration
class List;
class Node {

    int data;
    Node *next;
    public:
        Node(int d):data(d),next(nullptr){};

        ~Node() {
            if (next != nullptr) {
                delete next;
            }
        }

        friend class List;
};

class List{
    Node * head;
    Node * tail;
    int length = 0;

            int recursiveSearchHelper(int key, Node* head, int idx) {
            if (head == nullptr) {
                return -1;
            }
            if (head -> data == key) {
                return 0;
            }
            int ans = recursiveSearchHelper(key, head -> next, idx + 1);
            if (ans != -1) {
                return ans + 1;
            }
            return ans;

        }

    public:
        List():head(nullptr),tail(nullptr){}

        void push_front(int data) {
            if (head == nullptr) {
                // Dynamic memory allocation
                Node * n = new Node(data);
                head = tail = n;
            } else {
                Node * n = new Node(data);
                n -> next = head;
                head = n;
            }
            length ++;
        }

        void push_back(int data) {
            if (head == nullptr) {
                Node * n = new Node(data);
                head = tail = n;
            } else {
                Node * n = new Node(data);
                tail -> next = n;
                tail = n;
            }
            length ++;
        }

        void print() {
            Node * temp = head;
            while (temp != nullptr) {
                cout << temp->data << " -> ";
                if (temp -> next == nullptr) {
                    cout << "NULL" <<endl;
                }
                temp = temp -> next;
            }
        }

        void insert(int data, int pos) {
            length++;
            if (pos == 0) {
                push_front(data);
                return;
            }
            Node* temp = head;
            for (int i = 1; i <= pos - 1; i++) {
                temp = temp -> next;
            }

            Node * newNode = new Node(data);

            newNode -> next = temp -> next;
            temp -> next = newNode; 
        }

        int size() {
            return length;
        }

        int search(int key) {
            Node* temp = head;
            int idx = 0;

            while (temp != nullptr) {
                if (temp -> data == key) {
                    return idx;
                }
                temp = temp -> next;
                idx ++;
            }
            return -1;
        }


        int recursiveSearch(int key) {
            int ans = recursiveSearchHelper(key, head, 0);
            return ans;
        }

        void pop_front() {
            Node* temp = head;
            head = head -> next;
            temp -> next = nullptr;
            delete temp;
        }

        void delete_pos(int pos) {
            if (pos > length) {
                cout << "Invalid position" <<endl;
                return;
            }
            Node* temp = head;
            for (int i = 1; i <= pos; i++) {
                temp = temp -> next;
            }

            Node* next = temp -> next;
            temp -> next = next -> next;
            next -> next = nullptr;
            delete next;
            return;

        }

        ~List() {
            if (head != nullptr) {
                delete head;
                head = nullptr;
            }
        }



};
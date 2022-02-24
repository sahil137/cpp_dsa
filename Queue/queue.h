class Queue {
    int *arr;
    int currSize;
    int maxSize;
    int front;
    int rear;

    public:
    Queue(int default_size = 5) {
        maxSize = default_size;
        arr = new int[maxSize];
        currSize = 0;
        front = 0;
        rear = maxSize - 1;
    }

    bool full(){
        return currSize == maxSize;
    }

    bool empty(){
        return currSize == 0;
    }

    void push(int data) {
        if (!full()) {
            rear = (rear + 1) % maxSize;
            arr[rear] = data;
            currSize ++;
        }
    }

    void pop() {
        if (!empty()) {
            // take front pointer forward
            front = (front + 1) % maxSize;
            currSize --;
        }
    }

    int getFront() {
        return arr[front];
    }



};
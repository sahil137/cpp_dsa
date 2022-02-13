template<typename T> // telling data in class to be definded of type T
class Vector{
    // Data Members
    T *arr;
    int currSize;
    int maxSize;
public:
    Vector(int maxSize = 1) {
        currSize = 0;
        this -> maxSize = maxSize;
        arr = new T[maxSize];
    }
    // push element in vector;
    void push_back(const T data){
        if (currSize == maxSize) {
            // create new array and delete the old one, double the capacity
            int *oldArray = arr;
            maxSize *= 2;
            arr = new T[maxSize];
            // copy elements
            for (int i = 0; i < currSize; i++) {
                arr[i] = oldArray[i]; 
            }

            delete [] oldArray;
        }

        arr[currSize] = data;
        currSize++;
    }

    void pop_back() {
        if (currSize > 0) {
            currSize --;
        }
    }

    bool isEmpty() const{
        return currSize == 0;
    }

    // Front, Back, At(i), []

    T front() const{
        return arr[0];
    }
    T back() const{
        return arr[currSize - 1];
    }
    int at(const int i) const{
        if (i < currSize) {
            return arr[i];
        }
        return -1;
    } 
    int size() const{
        return currSize;
    }
    int capacity() const{
        return maxSize;
    }

    // operator overloading
    // if parameter doesnt change then pass it as const (good practice)
    // same with funtions
    T operator[](const int i) const {
        return arr[i];
    } 

};
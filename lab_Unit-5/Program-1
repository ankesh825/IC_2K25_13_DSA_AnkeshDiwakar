//Implementation of Linear Queue using Array
#include <iostream>
using namespace std;

class Queue {
private:
    int* arr;
    int front, rear, size, capacity;

public:

    Queue(int cap) {
        capacity = cap;
        size = 0;
        arr = new int[capacity];

        front = 0;
        rear = -1;
    }

    void enqueue(int data) {

        if (isFull()) {
            cout << "Queue is full\n";
            return;
        }

        rear++;
        arr[rear] = data;
        size++;
    }

    void dequeue() {

        if (isEmpty()) {
            cout << "Queue is empty\n";
            return;
        }

        front++;
        size--;
    }

    int frontElement() {

        if (isEmpty()) {
            cout << "Queue is empty\n";
            return -1;
        }

        return arr[front];
    }

    bool isFull() {
        return size == capacity;
    }

    bool isEmpty() {
        return size == 0;
    }

    void display() {

        if (isEmpty()) {
            cout << "Queue is empty\n";
            return;
        }

        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }

        cout << endl;
    }

    ~Queue() {
        delete[] arr;
    }
};

int main() {

    Queue q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();

    cout << "Front: " << q.frontElement() << endl;

    q.dequeue();

    q.display();

    return 0;
}
output:
10 20 30
10
20 30
//Queue is a linear data structure that follows FIFO (First In, First Out), where insertion is performed at the rear and deletion is performed from the front.
//logic
q.display() = 10 20 30
q.frontele() = 10
q.dequeue() ke baad q.display() = 20 30

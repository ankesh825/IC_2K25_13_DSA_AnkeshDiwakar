// dynamic stack program

#include <iostream>
using namespace std;

class myStack {

private:

    int *arr;
    int capacity, top;

public:

    //  constructor
    myStack(int cap) {
        capacity = cap;
        arr = new int[capacity];
        top = -1;
    }

    bool isempty() {
        if (top == -1) {
            cout << "stack is empty\n";
            return true;
        }
        return false;
    }

    bool isfull() {
        if (top == capacity - 1) {
            cout << "stack is full\n";
            return true;
        }
        return false;
    }

    // push
    void push(int x) {

        if (isfull()) {
            cout << "overflow stack\n";
            return;
        }

        arr[++top] = x;
        cout << "pushed value\n\n";
    }

    // pop
    int pop() {

        if (isempty()) {
            cout << "underflow stack\n";
            return -1;
        }

        cout << "pulled value\n";
        return arr[top--];
    }

    // peek
    int peek() {

        if (isempty()) {
            cout << "underflow stack\n";
            return -1;
        }

        cout << "the top is\n";
        return arr[top];
    }

    // display
    void display() {

        if (isempty()) {
            cout << "underflow stack\n";
            return;
        }
        else {
            cout << "\nthe stack is: ";

            for (int i = 0; i <= top; i++) {
                cout << arr[i] << endl;
            }
        }
    }

    // destructor
    ~myStack() {
        delete[] arr;
    }
};

int main() {

    myStack s(4);

    s.push(55);
    s.push(56);
    s.push(57);

    cout << s.pop() << endl;

    s.push(58);
    s.push(59);

    cout << s.peek() << endl;

    cout << (s.isempty() ? "yes" : "no") << endl;

    s.isfull();

    s.display();

    return 0;
}
output:-
pushed value

pushed value

pushed value

pulled value
57
pushed value

pushed value

the top is
59
no
stack is full

the stack is: 55
56
58
59

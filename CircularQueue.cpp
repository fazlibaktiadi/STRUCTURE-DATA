#include <iostream>

using namespace std;

const int MAX_SIZE = 5;
int cQueue[MAX_SIZE];
int front = 0, rear = -1, itemCount = 0;

void enqueue(int val) {
    if (itemCount == MAX_SIZE) {
        cout << "Queue Overflow!\n";
        return;
    }
    rear = (rear + 1) % MAX_SIZE;
    cQueue[rear] = val;
    itemCount++;
}

void dequeue() {
    if (itemCount == 0) {
        cout << "Queue Underflow!\n";
        return;
    }
    front = (front + 1) % MAX_SIZE;
    itemCount--;
}

void display() {
    cout << "Queue: ";
    for (int i = 0; i < itemCount; i++) {
        int idx = (front + i) % MAX_SIZE;
        cout << cQueue[idx] << " ";
    }
    cout << "\n";
}

int main() {

    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);


    dequeue();
    dequeue();


    enqueue(60);
    enqueue(70);

    display();

    return 0;
}

#include <iostream>

using namespace std;

const int MAX_SIZE = 5;
int queueArr[MAX_SIZE];
int frontIdx = 0;
int rearIdx = -1;
int countElem = 0;

void enqueue(int val) {
    if (countElem >= MAX_SIZE) {
        cout << "Queue Overflow! Queue is full.\n";
        return;
    }
    rearIdx++;
    queueArr[rearIdx] = val;
    countElem++;
    cout << val << " inserted successfully.\n";

}

void dequeue() {
    if (countElem <= 0) {
        cout << "Queue Underflow! Queue is empty.\n";
        return;
    }
    cout << queueArr[frontIdx] << " removed successfully.\n";
    for (int i = 0; i < rearIdx; i++){
        queueArr[i] = queueArr[i + 1];
    }
    rearIdx--;
    countElem--;
}

void display() {
    if (countElem <= 0) {
        cout << "Queue: (empty)\n";
        return;
    }
    cout << "Queue: ";
    for (int i = 0; i <= rearIdx; i++){
        cout << queueArr[i] << " ";
    }
}

int main() {
    int choice, val;
    do {
        cout << "\n==== QUEUE MENU ====\n";
        cout << "1. Enqueue\n2. Dequeue\n3. Front\n4. Display\n5. Exit\n";
        cout << "Choose operation: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value: ";
            cin >> val;
            enqueue(val);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            if (countElem > 0)
                cout << "Front element: " << queueArr[0] << "\n";
            else
                cout << "Queue is empty.\n";
            break;
        case 4:
            display();
            break;
        case 5:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice!\n";
        }

    }while (choice != 5);

    return 0;

}

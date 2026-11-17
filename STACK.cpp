#include <iostream>

using namespace std;

const int MAX_SIZE = 5;
int stackArr[MAX_SIZE];
int topIndex = -1;

void push(int val) {
    if (topIndex >= MAX_SIZE - 1) {
        cout << "Stack Overflow! Cannot push " << val << ".\n";
        return;
    }
    topIndex++;
    stackArr[topIndex] = val;
    cout << val << " inserted successfully.\n";
}

void pop() {
    if (topIndex < 0) {
        cout << "Stack Underflow! Stack is empty.\n";
        return;
    }
    cout << stackArr[topIndex] << " removed successfully.\n";
    topIndex--;
}

void peek() {
    if (topIndex < 0) {
        cout << "Stack is empty.\n";
        return;
    }
    cout << "Top element: " << stackArr[topIndex] << "\n";
}

void display() {
    if (topIndex < 0) {
        cout << "Stack is empty.\n";
        return;
    }
    cout << "Stack (Top to Bottom): ";
    for (int i = topIndex; i >= 0; i--) {
        cout << stackArr[i] << " ";
    }
    cout << "\n";
}

int main() {
    int choice, val;
    do {
        cout << "\n===== STACK MENU =====\n";
        cout << "1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\n";
        cout << "Choose operation: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> val;
                push(val);
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
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
    } while (choice != 5);

    return 0;
}

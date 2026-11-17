#include <iostream>
#include <string>

using namespace std;

int main() {
    const int MAX = 100;
    char charStack[MAX];
    int top = -1;

    string word;
    cout << "Enter a word: ";
    cin >> word;

    cout << "Original word: " << word << "\n";

    for (int i = 0; i < word.length(); i++) {
        if (top < MAX - 1) {
            top++;
            charStack[top] = word[i];
        }
    }

    cout << "Reversed word: ";

    while (top >= 0){
        cout << charStack[top];
        top--;
    }
    cout << "\n";

    return 0;
}

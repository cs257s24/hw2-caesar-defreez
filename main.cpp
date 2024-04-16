#include <iostream>
#include <string>

using namespace std;

int main() {
    // Ask the user for a message.
    string message;

    while (message != "quit") {
        cout << "Enter a message: ";
        getline(cin, message);

        for (char c : message) {
            c = c - 65;
            c = (c + 13) % 26;
            c = c + 65;
            cout << c;
        }
        cout << endl;
        // A string in C++ is a sequence of characters
        // The first index is of type char
        // char is a numeric type that can store a single character, range 0-255

}

    return 0;
}
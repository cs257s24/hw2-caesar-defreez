#include "caesar.h"

#include <iostream>

using namespace std;

int main() {
    char c = 'a';
    int key = 1;

    char result = shift_char(c, -key);

    cout << (int) result << endl;
}
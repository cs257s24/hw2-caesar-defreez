#include "caesar.h"

#include <string>

// Is this correct? 
char shift_char(char c, int key) {
    char shifted = c;

    if ('a' <= c && c <= 'z') {
        // Lowercase letter
        shifted = (c - 'a' + key) % 26 + 'a';
    } else if ('A' <= c && c <= 'Z') {
        // Uppercase letter
        shifted = (c - 'A' + key) % 26 + 'A';
    } else {
        // Otherwise, don't shift the character
        shifted = c;
    }

    return shifted;
}

std::string encrypt(std::string message, int key) {
    std::string encrypted = "";

    for (char c : message) {
        encrypted += shift_char(c, key);
    }

    return encrypted;
}

std::string decrypt(std::string message, int key) {
    std::string decrypted = "";

    for (char c : message) {
        decrypted += shift_char(c, -key);
    }

    return decrypted;
}
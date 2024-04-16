#ifndef CAESAR_H
#define CAESAR_H

#include <string>

// Shifts a single character by a given key.
// Parameters:
//  c - the character to shift
//  key - the amount to shift the character by
// 
// Returns:
//  The shifted character.
char shift_char(char c, int key);

// Encrypts and decrypts entire messages.
std::string encrypt(std::string message, int key);
std::string decrypt(std::string message, int key);


#endif
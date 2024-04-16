// Create crack.cpp that does the following for each possible key (0 to 25):

// Decrypts the message using the key. It will be easiest to duplicate your decryption code from part 1 here.
// Count the number of E's in the decrypted text.
// Print the key that produces the decrypted text with the most E's.

#include "caesar.h"

#include <iostream>

using namespace std;

int count_e(string message) {
    int e_count = 0;

    for (char c : message) {
        if (c == 'e' || c == 'E') {
            e_count++;
        }
    }

    return e_count;
}

int main() {

    string message = "Olssv, tf uhtl pz Pupnv Tvuavfh. Fvb rpsslk tf mhaoly. Wylwhyl av kpl.";

    int best_key = 0;
    int max_e_count = 0;

    // For every key from to to 25
    for (int key = 0; key < 26; key++) {
        int e_count = count_e(decrypt(message, key));
        if (e_count > max_e_count) {
            max_e_count = e_count;
            best_key = key;
        }
    }

    cout << "Best key: " << best_key << endl;
    cout << "Decrypted message: " << decrypt(message, best_key) << endl;

}
#include <iostream>
using namespace std;

int main() {
    int i = 0;

    while (i < 6) {
        i++;

        if (i == 3) {
            cout << "Skipping 3..." << endl;
            continue; // Skips the 'cout' below and goes back to the 'while' check
        }

        cout << "Current number: " << i << endl;
    }

    return 0;
}